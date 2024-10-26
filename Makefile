# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eros-gir <eros-gir@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:00:37 by eros-gir          #+#    #+#              #
#    Updated: 2024/10/26 15:58:36 by eros-gir         ###   ########.fr        #
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
			#$(DIRBONUS)ft_list_push_front_bonus.s \
			$(DIRBONUS)ft_list_size_bonus.s \
			$(DIRBONUS)ft_list_sort_bonus.s \
			$(DIRBONUS)ft_list_remove_if_bonus.s

HDRS =	libasm.h
HDRSBONUS = libasm_bonus.h

OBJS =	$(SRCS:.s=.o)
OBJSBONUS = $(SRCSBONUS:.s=.o)

NASM =	nasm
NFLAGS =	-f elf64

CC =	cc
CFLAGS = -Wall -Wextra -Werror

%.o: %.s $(HDRS)
	$(NASM) $(NFLAGS) $< -o $@

$(DIRBONUS)%.o: $(DIRBONUS)%.s $(HDRSBONUS) 
	$(NASM) $(NFLAGS) $< -o $@

#Commands

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(OBJS) $(OBJSBONUS)
	ar rcs $(NAME) $(OBJSBONUS)

test: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lasm -o testing

test_bonus: $(NAME) $(OBJS) $(OBJSBONUS) main_bonus.c
	$(CC) $(CFLAGS) main_bonus.c $(NAME) $(OBJS) $(OBJSBONUS) -o testing_bonus

clean:
	rm -f $(OBJS) $(OBJSBONUS)

fclean: clean
	rm -f $(NAME) testing
	rm -f $(NAME) testing_bonus

re: fclean all

.PHONY: all clean fclean re test bonus test_bonus