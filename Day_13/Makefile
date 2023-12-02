##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC     =   src/main.c\
			src/events.c\
			src/pixels.c\
			src/framebuffer.c\

OBJ	    =	$(SRC:.c=.o)

NAME    =	tiny_death

CFLAGS  = -lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
