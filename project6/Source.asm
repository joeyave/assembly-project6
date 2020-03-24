.386
.model flat, stdcall
option casemap :none
include ../dependencies/include/masm32.inc
include	../dependencies/include/kernel32.inc
includelib masm32.lib
includelib kernel32.lib

;�������.

; ������������ ���������� �������� � �����.
; ���������:
;   number - �����.
; "����������":
;   ebx - ���������� �������� � �����.
count_ones macro number
    push eax
    push ecx

    ; ������� ������ � �����.
    xor ebx, ebx

    xor eax, eax
    mov ax, number

    
    ; ���� ��� �������� ���������� ������ � �����. 
    ; �������� ��� ����, ����� ��������.
    mov ecx, 15
    count_ones_loop:
        ; ������� ���� ����� �� ���� ������. 
        ; � carry flag ����� ������� ��������� ��������� ���.
        ror ax, 1

        ; �������� ���� ��������� ���. 
        ; ���� �� ����� 1, ���������� ������� ������ (ebx).
        jnc continue
        inc ebx

        continue:
    loop count_ones_loop

    ; ������� 16-� ��� ��� ����,
    ; ����� ������� ����� � �������� ���������.
    ror ax, 1

    pop ecx
    pop eax
endm

; ������������� ����������� ���.
; ���������:
;   number - �����.
;   ones_amount - ���������� ��������.
set_control_bit macro number, ones_amount
    pushad
    mov eax, number

    ; �������� ������� ������.
    ; ���� ������� ��� ����� 0, �� ����� ������.

    ; ������� test ��������� ���������� AND �����
    ; ����� ������ ���� ���������. �������� �� ����������,
    ; ������� ������ ������ �� �����.

    ; ������� ��������� zero flag ������ ����, ���� ����� ������.
    test ones_amount, 1
    jz is_even

    ; ���������� ������ ��������.
    ; ������������ ������ ��� ������ �������.
    or ax, 1000000000000000b
    mov number, ax
    jmp exit

    is_even:
    ; ���������� ������ ������.
    ; ������������ ������ ��� ������ ����.
    and ax, 0111111111111111b
    mov number, ax
    exit:
    popad
endm

; ������� ������ � �������.
print_array macro data
    local buffer, print_loop

    .data
    buffer db 10 dup(?)

    .code
    pushad
    mov esi, offset data
    mov ecx, lengthof data

    print_loop:
        mov eax, [esi]
        
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

        add esi, 2
    loop print_loop
    popad
endm


.data
my_secret_data dw 14, 15, 23, 12, 142, 63, 21

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

    ; ����, ������� �������� �� ������� �������� �������.
    array_loop:
        count_ones [esi]
        set_control_bit [esi], ebx
        add esi, 2
    loop array_loop

    pushad
    invoke StdOut, offset msg_after
    popad
    print_array my_secret_data
invoke ExitProcess, 0
main endp

end main
