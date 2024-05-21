section .text
	global _start

_start:
	mov eax, 3


	xor ebx, ebx
	xor eax, eax
	inc eax
	int 80h

p1:
	mov edx, len1
	mov ecx, a1
	mov eax, 4
	mov ebx, 1
	int 80h

p2:
	mov edx, len2
	mov ecx, a2
	mov ebx, 1
	mov eax, 4
	int 80h

p3:
	mov edx, len3
	mov ecx, a3
	mov ebx, 1
	mov eax, 4
	int 80h

section .data
	a1 db "TroyMartian", 0xa
	len1 equ $ - a1
	a2 db "VladSaturnian", 0xa
	len2 equ $ - a2
	a3 db "GraemeMercurian", 0xa
	len3 equ $ - a3
	an: dd 0x1
