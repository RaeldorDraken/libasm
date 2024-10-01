global ft_strcmp

section .text

ft_strcmp:
    xor rax, rax
    xor rcx, rcx

.loop:
    mov al, [rdi + rcx]
    mov dl, [rsi + rcx]
    cmp al, dl
    jne .done
    test al, al
    je .done
    inc rcx
    jmp .loop

.done:
    sub al, dl
    movsx rax, al
    ret