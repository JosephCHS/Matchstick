/*
** EPITECH PROJECT, 2018
** check_error
** File description:
** made by Joseph Chartois
*/

#include "my.h"

int	check_error(int ac, char **av)
{
	if (check_params(ac, av) == 1) {
		return (1);
	}
	else if (check_nb_is_nb(av) == 1) {
		return (1);
	} else {
		return (0);
	}
	return (0);
}

int	check_nb_is_nb(char **av)
{
	int idx = -1;

	while (av[1][++idx]) {
		if (av[1][idx] < '0' || av[1][idx] > '9') {
			my_putstr_error("Error: bad arguments\n");
			my_putstr_error("Try with number\n");
			return (1);
		}
	}
	idx = -1;
	while (av[2][++idx]) {
		if (av[2][idx] < '0' || av[2][idx] > '9') {
			my_putstr_error("Error: bad arguments\n");
			my_putstr_error("Try with number\n");
			return (1);
		}
	}
	return (0);
}

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
		my_putstr_error("Try with two arguments\n");
		return (1);
	} else {
		return (0);
	}
	return (0);
}

int	check_bad_args(char **av)
{
	int nb1 = my_getnbr(av[1]);
	int nb2 = my_getnbr(av[2]);

	if (nb1 <= 1 || nb1 >= 100) {
		my_putstr_error("Error: wrong number of lines");
		my_putstr_error("\nTry with: 1 < n < 100\n");
		return (1);
	}
	else if (nb2 <= 0) {
		my_putstr_error("Error: wrong number of matches");
		my_putstr_error("\nTry with: n > 0\n");
		return (1);
	} else {
		return (0);
	}
	return (0);
}
