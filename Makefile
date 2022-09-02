##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## It should perform the following actions
##

GENERATOR = generator

SOLVER = solver

all:
	make -C $(GENERATOR)
	make -C $(SOLVER)

clean:
	make clean -C $(GENERATOR)
	make clean -C $(SOLVER)

fclean:	clean
	make fclean -C $(GENERATOR)
	make fclean -C $(SOLVER)

re:	fclean all

.PHONY: all clean fclean re
