/*
** EPITECH PROJECT, 2018
** print fct
** File description:
** made by Joseph Chartois
*/

#include "my.h"

void	print_line_recap(int line, int matches)
{
	my_putstr("Player removed ");
	my_put_nbr(matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putchar('\n');
	return;
}

int	print_result(int result)
{
	if (result == 1) {
		my_putstr("You lost, too bad...\n");
	}
	else if (result == 2){
		my_putstr("I lost... snif... but I'll get you next time!!\n");
	}
	return (result);
}

void	print_error_matches(int nb_max_matches)
{
	my_putstr("Error: you cannot remove more than ");
	my_put_nbr(nb_max_matches);
	my_putstr(" matches per turn\n");
	return;
}

void	print_ai_turn(void)
{
	my_putstr("\nAI's turn...\n");
	return;
}

void	print_ai_recap(int line, int matches)
{
	my_putstr("AI removed ");
	my_put_nbr (matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putchar('\n');
}
