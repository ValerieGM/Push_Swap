# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgongora <vgongora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 12:44:53 by vgongora          #+#    #+#              #
#    Updated: 2020/07/20 16:46:18 by vgongora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker

FLAGS = -Wall -Werror -Wall

SRC = swap.c \
	  push.c \
	  rotate.c \
	  reverse.c \
	  main.c \
	  check.c \
	  arg.c \
	  ../../push_swap/src/error.c \

DIR = ../../libft

all: $(NAME)
$(NAME):
	make all -C $(DIR)
	gcc $(FLAGS) -o  $(NAME) $(SRC) ../../libft/libft.a

clean:
	make clean -C $(DIR)
	rm -rf $(NAME)

fclean: clean
	make fclean -C $(DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
