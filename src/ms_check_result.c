/*
** EPITECH PROJECT, 2018
** check result
** File description:
** made by Joseph Chartois
*/

#include "my.h"

int	check_result(char **map)
{
	int idx = 0;

	while ((*map)[idx] != '\0') {
		if ((*map)[idx] == '|') {
			return (0);
		}
		++idx;
	}
	return (1);
}
