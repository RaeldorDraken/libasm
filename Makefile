# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:00:37 by eros-gir          #+#    #+#              #
#    Updated: 2024/09/11 18:25:52 by eros-gir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME =	libasm.a

DIR  =	./srcs/

SRCS =	$(DIR)ft_strlen.s \
		$(DIR)ft_strcpy.s \
		$(DIR)ft_strdup.s \
		#$(DIR)ft_strcmp.s \
		$(DIR)ft_write.s \
		$(DIR)ft_read.s

HDRS =	libasm.h

OBJS =	$(SRCS:.s=.o)

NASM =	nasm

NFLAGS =	-f elf64

CC =	gcc

CFLAGS =	-no-pie -Wall -Wextra -Werror

%.o: %.s $(HDRS)
	$(NASM) $(NFLAGS) $< -o $@

#Commands

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o test_program

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) test_program

re: fclean all

.PHONY: all clean fclean re test