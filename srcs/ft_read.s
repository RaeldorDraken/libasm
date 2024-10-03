global ft_read

section .text
extern  __errno_location

ft_read:
    mov rax, 0
    syscall

    cmp rax, 0
    jge .done

    call __errno_location
    mov [rax], rdi
    mov rax, -1

.done:
    ret