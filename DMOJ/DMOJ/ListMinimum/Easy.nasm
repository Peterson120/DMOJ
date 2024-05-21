section .text
global start

extern scanf
extern printf

start:
	add esp, 4
	push i1
	push fin
	call scanf

loop:
	add esp, 8
	push rbx
	lea ecx, [i1 + 12]
	push fout
	call printf
	add esp, 8
	pop rcx
	pop rbx

	dec ecx
	jle loop

	xor ebx, ebx
	mov eax, 1
	int 80h

section .data
	fin: db "%d", 0
	fout: db "%d", 10, 0
	i1: times 4 db 0
