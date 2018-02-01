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

	if (check_error(ac, av) == 1) {
		return (84);
	}
	map = create_map(av);
	map = matches_fill(map, av);
/*	if (game_matches(map) == 1) {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	} else {
		my_putstr("You lost, too bad...");
		return (2);
	}
*/
	my_putstr(map);
	free(map);
	return (0);
}
