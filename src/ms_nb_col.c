/*
** EPITECH PROJECT, 2018
** find nb of col
** File description:
** Made by Joseph Chartois
*/

#include "my.h"

int	nb_col(char *av)
{
	int nb = my_getnbr(av);
	int idx = 1;
	int col = 1;

	while (idx != nb) {
		col = col + 2;
		++idx;
	}
	return (col);
}
