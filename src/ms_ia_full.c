/*
** EPITECH PROJECT, 2018
** ia play full
** File description:
** made by Joseph Chartois
*/

#include "my.h"

int	ia_play_full(char **map, int nb_max_matches, int idx, int *line)
{
	int nb_m = nb_max_matches;

	*line = find_line_ia(map, idx);
	while (nb_max_matches != 0) {
		(*map)[idx] = ' ';
		--nb_max_matches;
		--idx;
	}
	return (nb_m);
}

int	ia_play_one(char **map, int idx, int *line)
{
	*line = find_line_ia(map, idx);
	(*map)[idx] = ' ';
	return (1);
}

int	ia_play_dispo_less_one(char **map,
			int nb_matches_line, int idx, int *line)
{
	int nb_m = 0;

	*line = find_line_ia(map, idx);
	--nb_matches_line;
	nb_m = nb_matches_line;
	--idx;
	while (nb_matches_line != 0) {
		(*map)[idx] = ' ';
		--nb_matches_line;
		--idx;
	}
	return (nb_m);
}

int	find_line_ia(char **map, int idx)
{
	int cnt = 0;

	while (idx != 0) {
		if ((*map)[idx] == '\n') {
			++cnt;
		}
		--idx;
	}
	return (cnt);
}
