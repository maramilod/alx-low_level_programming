extern printf

section .data
      print db 'Hello, Holberton', 10, 0

section .text
     global main

main:
   mov edi, print
   mov eax, 0
   call printf
