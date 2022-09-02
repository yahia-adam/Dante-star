##
## EPITECH PROJECT, 2022
## makfile
## File description:
## makefile
##

SRC		=	src/main_solver.c					\
			src/read_file.c						\
			src/lib_funtion/my_strlen.c			\
			src/lib_funtion/my_putstr.c			\
			src/find_direction.c				\
			src/solver.c						\
			src/backtrack.c						\

OBJ		=	$(SRC:.c=.o)

NAME	=	solver

DEBUG	= -g3

CFLAGS =  -Wall -Wextra -g3

CPPFLAGS	+=	-I include

all:	$(OBJ)
	gcc -o $(NAME) $(OBJ)

debug: CPPFLAGS += -g3
debug: re

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: re fclean clean all debug
