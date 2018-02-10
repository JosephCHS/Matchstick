/*
** EPITECH PROJECT, 2018
** memset home
** File description:
** made by Joseph Chartois
*/

#include "my.h"

void	my_memset(char **map, int lines, int col)
{
	int idx = 0;

	while (idx != (lines * col)) {
		(*map)[idx] = 32;
		++idx;
	}
	return;
}
