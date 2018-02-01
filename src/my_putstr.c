/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** Made by Joseph Chartois
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char const *str)
{
	int idx = 0;

	while (str[idx] != '\0') {
		my_putchar(str[idx]);
		idx = idx + 1;
	}
}
