/*
** EPITECH PROJECT, 2018
** check_error
** File description:
** made by Joseph Chartois
*/

#include "my.h"

int	check_params(int ac, char **av)
{
	if (check_nb_args(ac) == 1) {
		return (1);
	}
	else if (check_bad_args(av) == 1) {
		return (1);
	} else {
		return (0);
	}
	return (0);
}

int	check_nb_args(int ac)
{
	if (ac != 3) {
		my_putstr_error("Error: wrong number of arguments\n");
		return (1);
	} else {
		return (0);
	}
	return (0);
}

int	check_bad_args(char **av)
{
	int nb1 = my_getnbr(av[1]);

	if (nb1 <= 1 || nb1 >= 100) {
		my_putstr_error("Error: wrong number of lines (1 < n < 100)\n");
		return (1);
	} else {
		return (0);
	}
	return (0);
}
