.386
.model flat, stdcall
option casemap :none
include ../dependencies/include/masm32.inc
include	../dependencies/include/kernel32.inc
includelib masm32.lib
includelib kernel32.lib

;Макросы.

; Подсчитывает количество единичек в байте.
; Принимает:
;   number - число.
; "Возвращает":
;   ebx - количество единичек в байте.
count_ones macro number, array_type
    push eax
    push ecx

    ; Счетчик единиц в байте.
    xor ebx, ebx

    xor eax, eax
    mov ax, number

    
    ; Цикл для подсчета количества единиц в слове. 
    ; Проверяю все биты, кроме старшего.
    if array_type eq 1
        mov ecx, 7
    elseif array_type eq 2
        mov ecx, 15
    endif
    count_ones_loop:
        ; Сдвигаю биты числа на один вправо. 
        ; В carry flag будет записан последний сдвинутый бит.
        ror ax, 1

        ; Проверяю этот сдвинутый бит. 
        ; Если он равен 1, увеличиваю счетчик единиц (ebx).
        jnc continue
        inc ebx

        continue:
    loop count_ones_loop

    ; Сдвигаю последний раз для того,
    ; чтобы вернуть число в исходное состояние.
    ror ax, 1

    pop ecx
    pop eax
endm

; Устанавливает контрольный бит.
; Принимает:
;   number - число.
;   ones_amount - количество единичек.
set_control_bit macro number, array_type, ones_amount
    pushad
    mov eax, number

    ; Проверяю счетчик единиц.
    ; Если младший бит равен 0, то число четное.

    ; Команда test выполняет логическое AND между
    ; всеми битами двух операндов. Операнды не изменяются,
    ; команда влияет только на флаги.

    ; Команда установит zero flag равным нулю, если число четное.
    test ones_amount, 1
    jz is_even

    ; Количество единиц нечетное.
    ; Устанавливаю первый бит равным единице.
    if array_type eq 1
        or al, 10000000b
    elseif array_type eq 2
        or ax, 1000000000000000b
    endif
    mov number, ax
    jmp exit

    is_even:
    ; Количество единиц четное.
    ; Устанавливаю первый бит равным нулю.
    if array_type eq 1
        and al, 01111111b
    elseif array_type eq 2
        and ax, 0111111111111111b
    endif
    mov number, ax
    exit:
    popad
endm

; Выводит массив в консоль.
print_array macro array
    local buffer, print_loop

    .data
    buffer db 10 dup(?)

    .code
    pushad
    mov esi, offset array
    mov ecx, lengthof array

    print_loop:
        mov eax, [esi]

        ; Если массив байтов.
        if type array eq 1
            cbw
        endif
        
        pushad
        mov esi, offset buffer
        invoke dwtoa, ax, esi
        invoke StrLen, esi
        add esi, eax
        mov al, " "
        mov [esi], al
        mov al, 0
        mov [esi + 1], al

        invoke StdOut, offset buffer
        popad

        if type array eq 1
            add esi, 1
        elseif type array eq 2
            add esi, 2
        endif
    loop print_loop
    popad
endm


.data
; Программа поддерживает либо байты, либо слова.
;my_secret_data dw 14, 15, 23, 12, 142, 63, 21
my_secret_data db 14, 15, 23, 12, 100, 63, 21

msg_before db 10, 13, "Array before:", 10, 13, 0
msg_after db 10, 13, "Array after:", 10, 13, 0

.code
main proc
    pushad
    invoke StdOut, offset msg_before
    popad

    print_array my_secret_data

    mov ecx, lengthof my_secret_data
    mov esi, offset my_secret_data

    ; Цикл, который проходит по каждому элементу массива.
    array_loop:
        count_ones [esi], type my_secret_data
        set_control_bit [esi], type my_secret_data, ebx

        if type my_secret_data eq 1
            add esi, 1
        elseif type my_secret_data eq 2
            add esi, 2
        endif
    loop array_loop

    pushad
    invoke StdOut, offset msg_after
    popad
    print_array my_secret_data
invoke ExitProcess, 0
main endp

end main
