section .data
    hello db "Hello, Holberton", 10, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Call printf function with hello string
    mov rdi, hello
    xor rax, rax
    call printf

    ; Exit program
    xor eax, eax
    pop rbp
    ret
