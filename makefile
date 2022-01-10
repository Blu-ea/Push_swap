# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 03:30:51 by amiguez           #+#    #+#              #
#    Updated: 2021/12/07 03:30:51 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = src/*

OBJ = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Werror -Wextra

INCLUDE_LIB = p_swap.h 
INCLUDE_MAKE = Makefile

%.o : %.c $(INCLUDE_LIB) $(INCLUDE_MAKE)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): 
	ar rcs $(NAME) $(OBJ)
	$(CC) $(OBJ) 

clean:

fclean: clean

re: fclean all