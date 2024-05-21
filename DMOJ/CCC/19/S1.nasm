section .text
	global _start

_start:
	

_l1: 
	cmp al, 'V'
	je _l2
	xor BYTE [h], 1
	; input char
	cmp al, 10
	jne _l1

_l2:
	xor BYTE [v], 1
	jmp _l1

	mov eax, 1
	mov ebx, 0
	ret

section .data
	char db 0
	v db 0
	h db 0
	a db '1 2', 10, '3 4', 10
	b db '2 1', 10, '4 3', 10
	c db '3 4', 10, '1 2', 10
	d db '4 3', 10, '2 1', 10
