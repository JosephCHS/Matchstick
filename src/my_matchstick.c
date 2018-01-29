/*
** EPITECH PROJECT, 2018
** main of matchstick
** File description:
** Made by Joseph Chartois
*/

#include "my.h"

int	main(int ac, char **av)
{
	if (check_params(ac, av) == 1) {
		return (84);
	}
	return (0);
}
