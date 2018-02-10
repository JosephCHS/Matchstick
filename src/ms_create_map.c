/*
** EPITECH PROJECT, 2018
** create map
** File description:
** made by Joseph Chartois
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

char	*create_map(char **av)
{
	int lines = my_getnbr(av[1]) + 2;
	int col = nb_col(av[1]) + 3;
	char *map = malloc(sizeof(char) * ((lines * col) + 1));

	if (map == NULL) {
		return (NULL);
	}
	my_memset(&map, lines, col);
	map[lines * col] = '\0';
	map = map_star_first(map, av[1], col);
	return (map);
}

char	*map_star_first(char *map, char *av, int col)
{
	int idx = -1;
	int first = 0;

	while (first == 0 && map[++idx]) {
		if (idx == col - 1) {
			map[idx] = '\n';
			first = 1;
		} else {
			map[idx] = '*' ;
		}
	}
	map = map_star_last(map, col);
	map = map_put_n(map, av);
	return (map);
}

char	*map_star_last(char *map, int col)
{
	int idx = -1;

	while (map[++idx]);
	--idx;
	map[idx] = '\n';
	--idx;
	col = col - 1;
	while (--col >= 0) {
		map[idx] = '*';
		--idx;
	}
	return (map);
}

char	*map_put_n(char *map, char *av)
{
	int place_n = nb_col(av) + 2;
	int stock_place_n = place_n;
	int last = 0;
	int count_n = -1;
	int idx = 1;

	while (last == 0) {
		if (idx == place_n) {
			map[idx] = '\n';
			map[idx - 1] = '*';
			map[idx + 1] = '*';
			++count_n;
			place_n = place_n + stock_place_n + 1;
		}
		last = last_n(count_n, av);
		++idx;
	}
	map[idx - 2] = '*';
	map[idx - 1] = '\n';
	map[idx] = '\0';
	return (map);
}

int	last_n(int count_n, char *av)
{
	int lines = (my_getnbr(av) + 1);

	if (count_n == lines) {
		return (1);
	}
	return (0);
}
