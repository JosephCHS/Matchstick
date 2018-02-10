/*
** EPITECH PROJECT, 2018
** check input line
** File description:
** made by Joseph Chartois
*/

#include "my.h"

int	check_input_line(char *buf, char **map)
{
	if (input_line_no_nb(buf) == 1) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (0);
	}
	else if (input_line_no_exist(buf, map) == 1) {
		my_putstr("Error: this line is out of range\n");
		return (0);
	}
	if (input_line_zero(buf) == 1) {
		my_putstr("Error: this line is out of range\n");
		return (0);
	}
	return (1);
}

int	check_input_matches(char *gamer_matches, char **map,
			    int nb_max_matches, int gamer_line)
{
	if (input_line_no_nb(gamer_matches) == 1) {
		my_putstr("Error: invalid input (positive number expected)\n");
		return (0);
	}
	else if (input_out_of_max_matches(nb_max_matches, gamer_matches) == 1) {
		my_putstr("Error: you cannot remove more than ");
		my_put_nbr(nb_max_matches);
		my_putstr(" matches per turn\n");
		return (0);
	}
	if (input_line_zero(gamer_matches) == 1) {
		my_putstr("Error: you have to remove at least one match\n");
		return (0);
	}
	else if (max_matches_on_line(gamer_matches, gamer_line, map) == 1) {
		my_putstr("Error: not enough matches on this line\n");
		return (0);
	}
	return (1);
}
