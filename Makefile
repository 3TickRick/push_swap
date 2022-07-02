# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rbrune <rbrune@student.42.fr>                +#+                      #
#                                                    +#+                       #
#    Created: 2022/01/17 11:14:11 by rbrune        #+#    #+#                  #
#    Updated: 2022/05/25 11:59:05 by rbrune        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc 
CFLAGS  = -Werror -Wall -Wextra
NAME = push_swap

SRC = main.c ft_sort_less_10.c input_parse.c pa.c pb.c pre_sort.c rotate.c rotate_utils.c sort.c swap.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ) 

re: fclean all

.PHONY: clean fclean all re