section .data
    hello_string db "Hello, Holberton", 0
    format_string db "%s\n", 0

section .text
    global main

    extern printf

main:
    ; Push arguments for printf onto the stack (format string and hello_string)
    push format_string
    push hello_string
    call printf

    ; Clean up the stack after the call
    add rsp, 16

    ; Exit the program
    mov eax, 60         ; syscall: exit
    xor edi, edi        ; status: 0
    syscall

