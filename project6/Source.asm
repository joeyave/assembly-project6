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
    
    ; ������� ������ � �����.
    xor ebx, ebx

    xor eax, eax
    mov al, 47
    
    
    ; ���� ��� �������� ���������� ������ � �����. 
    ; �������� ��� ����, ����� ��������.
    mov ecx, 7
    count_ones:
        ; ������� ���� ����� �� ���� ������. 
        ; � carry flag ����� ������� ��������� ��������� ���.
        ror al, 1

        ; �������� ���� ��������� ���. 
        ; ���� �� ����� 1, ���������� ������� ������ (ebx).
        jnc continue
        inc ebx

        continue:
    loop count_ones

    ; ������� ������� ��� ��� ����,
    ; ����� ������� ����� � �������� ���������.
    ror al, 1


    ; �������� ������� ������.
    ; ���� ������� ��� ����� 0, �� ����� ������.

    ; ������� test ��������� ���������� AND �����
    ; ����� ������ ���� ���������. �������� �� ����������,
    ; ������� ������ ������ �� �����.

    ; ������� ��������� zero flag ������ ����, ���� ����� ������.
    test bl, 1
    jz is_even

    ; ���������� ������ ��������.
    ; ������������ ������ ��� ������ �������.
    or al, 10000000b

    is_even:
    ; ���������� ������ ������.
    ; ������������ ������ ��� ������ ����.
    and al, 01111111b

invoke ExitProcess, 0
main endp

end main
