global ft_strdup

extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location

section .text

ft_strdup:
    call ft_strlen
    push rdi
    inc rax
    mov rdi, rax

    call malloc
    test rax, rax
    je .error

    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret

.error:
    xor rax, rax
    mov rdi, rax
    call __errno_location
    mov [rax], rdi
    mov rax, -1
    ret