/*
** EPITECH PROJECT, 2018
** game matches
** File description:
** made by Joseph Chartois
*/

#include "my.h"
#include "get_next_line.h"
#include <stdlib.h>

int	game_matches(char *map, char **av)
{
	char bol = '0';
	int result = 0;

	while (bol == '0') {
		my_putstr(map);
		my_putstr("\nYour turn:\n");
		result = gamer_condition(&map, result, av);
		if (result == -1)
			return (-1);
		else if (result == 1 || result == 2) {
			my_putstr(map);
			return (result);
		}
		my_putstr(map);
		print_ai_turn();
		result = ia_modif_map(&map, av[2]);
		if (result == 2) {
			my_putstr(map);
			return (result);
		}
	}
	return (result);
}

int	gamer_condition(char **map, int result, char **av)
{
	int bol = 0;
	char *buf = NULL;
	int nb_max_matches = my_getnbr(av[2]);
	int gamer_line = 0;

	while (bol == 0) {
		my_putstr("Line:\n");
		buf = get_next_line(0);
		if (buf == NULL)
			return (-1);
		else if (check_input_line(buf, map) == 1) {
			gamer_line = my_getnbr(buf);
			bol = line_ok(map, buf, nb_max_matches, gamer_line);
		}
		free(buf);
		if (bol == -1 || bol == 1)
			return (bol);
		else if (bol == 3)
			return (bol);
	}
	return (result);
}

int	line_ok(char **map, char *buf, int nb_max_matches, int gamer_line)
{
	int gamer_matches = 0;
	int bol = 0;

	my_putstr("Matches:\n");
	buf = get_next_line(0);
	gamer_matches = my_getnbr(buf);
	if (buf == NULL) {
		free(buf);
		return (-1);
	}
	if (check_input_matches(buf, map, nb_max_matches, gamer_line) == 1) {
		gamer_modif_map(map, gamer_matches, gamer_line);
		print_line_recap(gamer_line, gamer_matches);
		bol = 3;
	}
	free(buf);
	if (check_result(map) == 1)
		return (1);
	else if (bol == 3)
		return (3);
	return (0);
}
