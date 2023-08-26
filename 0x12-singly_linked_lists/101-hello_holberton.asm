global main
extern printf

main:
xor   eax, eax
use printf
edit ext format
mov eax 0
ret

format: db `Hello, Holberton\n`,0
