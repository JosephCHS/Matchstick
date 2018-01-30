/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header for match_stick
*/

#ifndef	MY_H_
#define	MY_H_

//ms_check_params.c
int	check_error(int, char **);
int	check_nb_is_nb(char **);
int	check_params(int, char **);
int	check_nb_args(int);
int	check_bad_args(char **);

//ms_create_map.c
char	*create_map(char **);
char	*map_star_first(char *, char *, int);
char	*map_star_last(char *, int);
char	*map_put_n(char *, char *);
int	last_n(int, char *);

//ms_nb_col.c
int	nb_col(char *);

//my_getnbr.c
int	selector(char);
int	my_getnbr(char *);

//my_put_error_str.c
void	my_err_putchar(char);
void	my_putstr_error(char *);

#endif	/* MY_H_ */
