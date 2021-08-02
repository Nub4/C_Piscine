# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 16:52:32 by odelvaux          #+#    #+#              #
#    Updated: 2020/02/26 20:39:12 by minummin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = ft_includes.h

OUT = bsq

SRC = main.c ft_create_map.c ft_find.c ft_print.c ft_solve.c ft_map_error.c

CC = gcc

FLAGS = -Wall -Wextra -Werror -I $(INCLUDE)

OBJ = $(SRC:.c=.o)

all:	$(OUT)

$(OUT): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(OUT)

%.o: %.c $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(OUT)

re:		fclean all

.PHONY: all clean fclean re
