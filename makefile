# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 21:11:46 by amiguez           #+#    #+#              #
#    Updated: 2022/01/11 21:56:14 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_PUSH = src/push_swap/*.c
OBJ_PUSH = obj/push_swap/*.o

SRC_LIB = src/libft/*.c
OBJ_LIB = obj/libft/*.o

all : $(NAME)

$(NAME) : 
	@gcc -c $(SRC_PUSH)
	@mv *.o obj/push_swap
	@gcc -c $(SRC_LIB)
	@mv *.o obj/libft
	@echo Objets compiled and moved
	@gcc $(OBJ_LIB) $(OBJ_PUSH) -o $(NAME)

clean :
	@rm $(OBJ_PUSH)
	@rm $(OBJ_LIB)
	@echo Objets Removed

fclean : clean
	rm $(NAME)
	@echo Executable Removed

re : fclean all
