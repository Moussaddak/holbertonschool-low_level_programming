	section .data
	fmt    db "%s",10,0
	msg    db "Hello, Holberton",0

	section .text
	extern printf
	global main

main:
	mov  rsi, msg
	mov  rdi, fmt
	mov  rax, 0
	call printf

	mov  eax, 0
	int  0x80
