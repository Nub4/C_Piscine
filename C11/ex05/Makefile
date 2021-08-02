# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minummin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 22:08:12 by minummin          #+#    #+#              #
#    Updated: 2020/02/27 15:42:38 by minummin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDE = ft_includes.h

OUT = do-op

SRC = main.c ft_atoi.c

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

fclean: clean
		rm -f $(OUT)

re:		fclean all

.PHONY: all clean fclean re
