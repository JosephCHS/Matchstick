/*
** EPITECH PROJECT, 2018
** fct for check_input.c
** File description:
** made by JC
*/

#include "my.h"

int	input_line_no_nb(char *str)
{
	int idx = 0;

	while (str[idx] != '\0') {
		if (str[idx] < '0' || str[idx] > '9') {
			return (1);
		}
		++idx;
	}
	return (0);
}

int	input_line_no_exist(char *buf, char **map)
{
	int line_picked = my_getnbr(buf);
	int nb_max_line = 0;
	int idx = 0;

	while ((*map)[idx] != '\0') {
		if ((*map)[idx] == '\n') {
			++nb_max_line;
		}
		++idx;
	}
	nb_max_line = nb_max_line - 2;
	if (line_picked == 0 || line_picked > nb_max_line ) {
		return (1);
	}
	return (0);
}

int	input_line_zero(char *buf)
{
	if (buf[0] == '0' && buf[1] == '\0') {
		return (1);
	}
	return (0);
}

int	input_out_of_max_matches(int max_nb_matches, char *buf)
{
	int nb_matches = my_getnbr(buf);

	if (nb_matches > max_nb_matches) {
		return (1);
	}
	return (0);
}

int	max_matches_on_line(char *buf, int gamer_line, char **map)
{
	int nb_matches = my_getnbr(buf);
	int nb_n = 0;
	int idx = 0;

	while (nb_n != gamer_line) {
		if ((*map)[idx] == '\n')
			++nb_n;
		++idx;
	}
	++idx;
	nb_n = 0;
	while ((*map)[idx] != '\n') {
		if ((*map)[idx] == '|')
			++nb_n;
		++idx;
	}
	if (nb_matches > nb_n)
		return (1);
	return (0);
}
