##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	cat.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

CFLAGS	=	-g -L../lib/my/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ../lib/my/
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm $(OBJ)
fclean:
	rm $(OBJ) -f
	rm $(NAME) -f

re:    fclean all
