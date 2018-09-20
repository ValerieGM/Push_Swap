# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgongora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 12:44:53 by vgongora          #+#    #+#              #
#    Updated: 2018/09/17 12:25:59 by vgongora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS = -Wall -Werror -Wall

SRC = error.c \
	  main.c \
	  push.c \
	  reverse.c \
	  rotate.c \
	  sort.c \
	  swap.c \

DIR = ../libft

all: $(NAME)
$(NAME):
	make all -C $(DIR)
	gcc $(FLAGS) -o  $(NAME) $(SRC) ../libft/libft.a

clean:
	make clean -C $(DIR)
	rm -rf $(NAME)

fclean: clean
	make fclean -C $(DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
