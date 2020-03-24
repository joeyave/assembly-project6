.386
.model flat, stdcall
option casemap :none
include ../dependencies/include/masm32.inc
include	../dependencies/include/kernel32.inc
includelib masm32.lib
includelib kernel32.lib

.data
    secret_data db 13, 14, 5, 2, 23, 43

.code
main proc
    
    ; Счетчик единиц в байте.
    xor ebx, ebx

    xor eax, eax
    mov al, 47
    
    
    ; Цикл для подсчета количества единиц в байте. 
    ; Проверяю все биты, кроме старшего.
    mov ecx, 7
    count_ones:
        ; Сдвигаю биты числа на один вправо. 
        ; В carry flag будет записан последний сдвинутый бит.
        ror al, 1

        ; Проверяю этот сдвинутый бит. 
        ; Если он равен 1, увеличиваю счетчик единиц (ebx).
        jnc continue
        inc ebx

        continue:
    loop count_ones

    ; Сдвигаю восьмой раз для того,
    ; чтобы вернуть число в исходное состояние.
    ror al, 1


    ; Проверяю счетчик единиц.
    ; Если младший бит равен 0, то число четное.

    ; Команда test выполняет логическое AND между
    ; всеми битами двух операндов. Операнды не изменяются,
    ; команда влияет только на флаги.

    ; Команда установит zero flag равным нулю, если число четное.
    test bl, 1
    jz is_even

    ; Количество единиц нечетное.
    ; Устанавливаю первый бит равным единице.
    or al, 10000000b

    is_even:
    ; Количество единиц четное.
    ; Устанавливаю первый бит равным нулю.
    and al, 01111111b

invoke ExitProcess, 0
main endp

end main
