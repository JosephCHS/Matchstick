/*
** EPITECH PROJECT, 2018
** matches create
** File description:
** made by Joseph Chartois
*/

#include "my.h"

char	*matches_in_map(char *map, char *av)
{
	int lines = my_getnbr(av[1]) + 1;
	int col = nb_col(av[1]);
	int idx = col + 3 + 1 + col / 2;
	int nb = 1;
	int idx = -1;

	while (map[++idx]);
	while (map[--idx] != ' ');
	while (idx != 0) {
	}
}
