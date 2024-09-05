global  ft_strcpy

section .text

ft_strcpy:
    mov rax, rdi
    mov rbx, rdi

.loop:
    mov al, [rsi]
    mov [rdi], al
    test al, al
    je .done
    inc rsi
    inc rdi
    jmp .loop

.done:
    mov rax, rbx
    ret