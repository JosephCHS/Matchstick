/*
** EPITECH PROJECT, 2018
** ia QI 24
** File description:
** made by Joseph Chartois
*/

#include "my.h"

int	ia_modif_map(char **map, char *av)
{
	int nb_max_matches = my_getnbr(av);
	int idx = find_pos_match(map);
	int nb_matches_line = nb_matches_on_line(map, idx);
	int line = 0;
	int matches = 0;

	if (nb_matches_line > nb_max_matches) {
		matches = ia_play_full(map, nb_max_matches, (idx - 1), &line);
	}
	else if (nb_matches_line == 1) {
		matches = ia_play_one(map, (idx - 1), &line);
	}
	else {
		matches = ia_play_dispo_less_one(map, nb_matches_line, idx, &line);
	}
	if (check_result(map) == 1) {
		print_ai_recap(line, matches);
		return (2);
	}
	print_ai_recap(line, matches);
	return (0);
}

int	find_pos_match(char **map)
{
	int idx = 0;

	while ((*map)[idx] != '|' && (*map)[idx] != '\0') {
		++idx;
	}
	while ((*map)[idx] == '|' && idx != '\0') {
		++idx;
	}
	return (idx);
}

int	nb_matches_on_line(char **map, int idx)
{
	int nb = 0;

	while ((*map)[idx - 1] == '|' && idx != 0) {
		--idx;
		++nb;
	}
	return (nb);
}
