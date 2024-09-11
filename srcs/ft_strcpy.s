global  ft_strcpy

section .text

ft_strcpy:
    mov rax, rdi
    xor rcx, rcx

.loop:
    mov al, BYTE [rsi + rcx]
    mov BYTE [rdi + rcx], al
    test al, al
    je .done
    inc rcx
    jmp .loop

.done:
    mov rax, rdi
    ret