# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:00:37 by eros-gir          #+#    #+#              #
#    Updated: 2024/10/03 18:05:21 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME =	libasm.a

DIR  =	./srcs/
DIRBONUS = ./srcs_bonus/

SRCS =	$(DIR)ft_strlen.s \
		$(DIR)ft_strcpy.s \
		$(DIR)ft_strdup.s \
		$(DIR)ft_strcmp.s \
		$(DIR)ft_read.s \
		$(DIR)ft_write.s

SRCSBONUS = $(DIRBONUS)ft_atoi_base_bonus.s \
			$(DIRBONUS)ft_list_push_front_bonus.s \
			$(DIRBONUS)ft_list_size_bonus.s \
			$(DIRBONUS)ft_list_sort_bonus.s \
			$(DIRBONUS)ft_list_remove_if_bonus.s

HDRS =	libasm.h
HDRSBONUS = libasm_bonus.h

OBJS =	$(SRCS:.s=.o)
OBJSBONUS = $(SRCSBONUS:.s=.o)

NASM =	nasm

NFLAGS =	-f elf64

CC =	gcc

CFLAGS =	-no-pie -Wall -Wextra -Werror

%.o: %.s $(HDRS)
	$(NASM) $(NFLAGS) $< -o $@

$(DIRBONUS)%.o: $(DIRBONUS)%.s $(HDRSBONUS)
	$(NASM) $(NFLAGS) $< -o $@

#Commands

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(OBJSBONUS)

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test_program

test_bonus: $(NAME) $(OBJSBONUS) main.c
	$(CC) $(CFLAGS) main.c $(NAME) $(OBJSBONUS) -o test_program

clean:
	rm -f $(OBJS) $(OBJSBONUS)

fclean: clean
	rm -f $(NAME) test_program

re: fclean all

.PHONY: all clean fclean re test bonus test_bonus