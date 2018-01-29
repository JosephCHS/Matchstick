##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile for the 105torus project
##

RM	= rm -f

GCC	=	gcc -o

SRC	=	src/my_matchstick.c		\
		src/my_getnbr.c			\
		src/ms_check_params.c		\
		src/my_put_error_str.c		\

NAME	=	matchstick

CFLAGS	=	-I./include/			\
		-W -Wall -Wextra		\

OBJ	=	$(SRC:.c=.o)

$(NAME):	$(OBJ)
	$(GCC) $(NAME) $(OBJ)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
