/*
** EPITECH PROJECT, 2018
** main of matchstick
** File description:
** Made by Joseph Chartois
*/

#include <stdlib.h>
#include "my.h"

int	main(int ac, char **av)
{
	char *map = NULL;
	int result = 0;

	if (check_error(ac, av) == 1) {
		return (84);
	}
	map = create_map(av);
	map = matches_fill(map, av);
	result = game_matches(map, av);
	check_exit_game(result, map);
	if (result == 2) {
		result = 1;
	}
	else if (result == 1) {
		result = 2;
	}
	return (result);
}
