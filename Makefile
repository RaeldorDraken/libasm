# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:00:37 by eros-gir          #+#    #+#              #
#    Updated: 2024/08/31 16:30:35 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME =	libasm.a

SRCS =	srcs/ft_strlen.s \
		srcs/ft_strcpy.s \
		srcs/ft_strcmp.s \
		srcs/ft_write.s \
		srcs/ft_read.s \
		srcs/ft_strdup.s

OBJS =	$(SRCS:.s=.o)

NASM =	nasm

NFLAGS =	-f elf64

CC =	gcc

CFLAGS =	-Wall -Wextra -Werror

%.o: %.s
	$(NASM) $(NFLAGS) $< -o $@

#Commands

$(NAME): %(OBJS)
	ac rcs $(NAME) %(OBJS)

all: $(NAME)

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test_program

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test_program

re: fclean all

.PHONY: all clean fclean re test