/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header for match_stick
*/

#ifndef	MY_H_
#define	MY_H_

//my_matchstick.c

//my_getnbr.c
int	selector(char);
int	my_getnbr(char const *);

//ms_check_error.c
int	check_params(int ac, char **av);
int	check_nb_args(int ac);
int	check_bad_args(char **av);

//my_put_error_str.c
void	my_err_putchar(char);
void	my_putstr_error(char *);

#endif	/* MY_H_ */
