##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

NAME	= my_advanced_do-op

CC	= gcc

RM	= rm -f

SRC	= my_avanced_do_op.c \
          my_avanced_do_op_functions.c

OBJ	= $(SRC:.c=.o)

LIBFLAG	= -L ../lib/my/ -lmy

CFLAGS = -g

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBFLAG)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
