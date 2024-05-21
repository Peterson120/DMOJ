section .text
	global _start

_start:
	mov eax, 3

	xor ebx, ebx
	xor eax, eax
	inc eax
	int 80h

section .bss
	R: resb 1
	S: resb 1
