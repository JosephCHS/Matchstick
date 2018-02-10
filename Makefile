##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile ms
##

RM	=	rm -f

GCC	=	gcc -o

SRC	=	src/get_next_line.c		\
		src/ms_check_input.c		\
		src/ms_check_input_fct.c	\
		src/ms_check_params.c		\
		src/ms_check_result.c		\
		src/ms_create_map.c		\
		src/ms_exit_game.c		\
		src/ms_game_matches.c		\
		src/ms_ia.c			\
		src/ms_ia_full.c		\
		src/ms_map_modif_by_gamer.c	\
		src/ms_matches_fill.c		\
		src/ms_nb_col.c			\
		src/ms_print.c			\
		src/my_getnbr.c			\
		src/my_matchstick.c		\
		src/my_put_error_str.c		\
		src/my_put_nbr.c		\
		src/my_putstr.c			\

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
