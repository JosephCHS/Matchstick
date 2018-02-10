/*
** EPITECH PROJECT, 2018
** modif map by gamer
** File description:
** made by Joseph Chartois
*/

#include "my.h"

void	gamer_modif_map(char **map, int gamer_matches, int gamer_line)
{
	int idx = 0;
	int cnt = 0;

	while (cnt != (gamer_line + 1)) {
		if ((*map)[idx] == '\n') {
			++cnt;
		}
		++idx;
	}
	while ((*map)[idx] != '|') {
		--idx;
	}
	while (gamer_matches != 0) {
		(*map)[idx] = ' ';
		--idx;
		--gamer_matches;
	}
	return;
}
