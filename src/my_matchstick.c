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
	map = create_matches(map, av);
	free(map);
	return (0);
}
