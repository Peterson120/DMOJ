section .text
	global _start
_start:
	mov ecx, 2
	mov eax, 3
	xor ebx, ebx

	l1:
		

		int 80h
		dec n
	cmp n, 0
	xor ebx, ebx
	xor eax, eax
	inc eax
	int 80h

_print:

section .bss
	n resb 4
	a resb 4
	b resb 4
