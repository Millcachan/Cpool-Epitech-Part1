##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC    =    do_op.c

OBJ    =    $(SRC:.c=.o)

NAME     =    do-op

all:    $(NAME)

$(NAME):    $(OBJ)
	make -C ./../lib/my/
	gcc -o $(NAME) $(OBJ) -L./../lib/my/ -lmy

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:    fclean all
