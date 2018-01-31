/*
** EPITECH PROJECT, 2018
** matches create
** File description:
** made by Joseph Chartois
*/

#include "my.h"

char	*matches_fill(char *map, char **av)
{
	int lines = my_getnbr(av[1]);
	int col = nb_col(av[1]) + 3;
	int idx_start = nb_col(av[1]) + 3 + (nb_col(av[1]) / 2) + 1;
	int nb_matches = 1;
	int tmp_matches = 0;
	int tmp_idx = 0;

	map[idx_start] = '|';
	while (--lines != 0) {
		idx_start = idx_start + col;
		nb_matches = nb_matches + 2;
		tmp_idx = idx_start - nb_matches / 2;
		while (tmp_matches != nb_matches) {
			map[tmp_idx] = '|';
			++tmp_idx;
			++tmp_matches;
		}
		tmp_matches = 0;
	}
	return (map);
}
