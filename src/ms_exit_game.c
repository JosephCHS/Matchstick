/*
** EPITECH PROJECT, 2018
** exit game
** File description:
** made by Joseph Chartois
*/

#include "my.h"
#include <stdlib.h>

int	check_exit_game(int result, char *map)
{
	free(map);
	print_result(result);
	return (result);
}
