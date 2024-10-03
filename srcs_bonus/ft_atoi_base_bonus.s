global ft_atoi_base

section .text
extern ft_strlen

ft_atoi_base:
    xor rax, rax
    xor rcx, rcx
    xor rdx, rdx
    mov rbx, rsi

    call ft_strlen
    mov r8, rax

.next:
    mov al, [rdi]
    cmp al, ' '
    je .skip_space
    cmp al, '-'
    je .negative
    cmp al, '+'
    je .positive
    jmp .parse

.skip_space:
    inc rdi
    jmp .next

.negative:
    xor rdx, 1
    inc rdi
    jmp .next

.positive:
    inc rdi
    jmp .next

.parse:
.loop:
    mov al, [rdi]
    test al, al
    jz .done
    mov rdi, rsi
    mov rcx, 0

.find_char:
    cmp byte [rdi + rcx], al
    je .char_found
    inc rcx
    cmp rcx, r8
    jnz .find_char
    jmp .done

.char_found:
    mov rbx, rax
    imul rax, r8
    add rax, rcx
    inc rdi
    jmp .loop

.done:
    cmp rdx, 0
    jz .return
    neg rax

.return:
    ret