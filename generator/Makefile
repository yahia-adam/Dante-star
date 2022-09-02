##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## It should perform the following actions
##

SRC		=	../src/main_generator.c	\
	../src/read_file.c	\
	../src/my_strlen.c	\
	src/error_management.c	\
	src/my_str_isnum.c	\
	src/create_maze.c	\
	src/my_putstr.c	\
	src/check_two_way_func.c	\
	src/go_in_a_direction.c	\
	src/generate_path.c	\
	src/check_way.c	\
	src/check_stuck.c	\
	src/check_end.c	\

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

NAME	=	generator

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I include

all:	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

debug: CPPFLAGS += -g3
debug: re

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: re fclean clean all debug
