/*
** EPITECH PROJECT, 2018
** ia play full
** File description:
** made by Joseph Chartois
*/

#include "my.h"

void	ia_play_full(char **map, int nb_max_matches, int idx)
{
	while (nb_max_matches != 0) {
		(*map)[idx] = ' ';
		--nb_max_matches;
		--idx;
	}
	return;
}

void	ia_play_one(char **map, int idx)
{
	(*map)[idx] = ' ';
	return;
}

void	ia_play_dispo_less_one(char **map, int nb_matches_line, int idx)
{
	--nb_matches_line;
	while (nb_matches_line != 0) {
		(*map)[idx] = ' ';
		--nb_matches_line;
		--idx;
	}
	return;
}
