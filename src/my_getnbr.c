/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** Made by Joseph Chartois
*/

#include "my.h"

int	selector(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	my_getnbr(char const *str)
{
	int incr = 0;
	int low = 1;
	int number = 0;

	if (str[0] == '-') {
		low = low * (-1);
		incr = 1;
	}
	while ((selector(str[incr])) == 1) {
		number = number * 10;
		number = number + str[incr] - '0';
		incr = incr + 1;
	}
	return (number * low);
}
