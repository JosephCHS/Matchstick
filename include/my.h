/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Header for match_stick
*/

#ifndef	MY_H_
#define	MY_H_

//get_next_line.c
char	*clean_str(char *);
char	*pseudo_realloc(char *, int, int *);
char	*create_str(char *, int *, int, int);
char	*get_next_line(int);

//ms_check_input.c
int	check_input_line(char *, char **);
int	check_input_matches(char *, char **, int, int);

//ms_check_input_fct.c
int	input_line_no_nb(char *);
int	input_line_no_exist(char *, char **);
int	input_line_zero(char *);
int	input_out_of_max_matches(int, char *);
int	max_matches_on_line(char *, int, char **);

//ms_check_params.c
int	check_error(int, char **);
int	check_nb_is_nb(char **);
int	check_params(int, char **);
int	check_nb_args(int);
int	check_bad_args(char **);

//ms_check_result.c
int	check_result(char **);

//ms_create_map.c
char	*create_map(char **);
char	*map_star_first(char *, char *, int);
char	*map_star_last(char *, int);
char	*map_put_n(char *, char *);
int	last_n(int, char *);

//ms_exit_game.c
int	check_exit_game(int, char *);

//ms_game_matches.c
int	game_matches(char *, char **);
void	print_norm(char *);
int	gamer_condition(char **, int, char **);
int	line_ok(char **, char *, int, int);

//ms_ia.c
int	ia_modif_map(char **, char *);
int	find_pos_match(char **);
int	nb_matches_on_line(char **, int);

//ms_ia_full.c
int	ia_play_full(char **, int, int, int *);
int	ia_play_one(char **, int, int *);
int	ia_play_dispo_less_one(char **, int, int, int *);
int	find_line_ia(char **, int);

//ms_map_modif_by_gamer.c
void	gamer_modif_map(char **, int, int);

//ms_matches_fill.c
char	*matches_fill(char *, char **);

//ms_nb_col.c
int	nb_col(char *);

//ms_print.c
void	print_line_recap(int, int);
int	print_result(int);
void	print_error_matches(int);
void	print_ai_turn(void);
void	print_ai_recap(int, int);

//my_getnbr.c
int	selector(char);
int	my_getnbr(char *);

//my_put_error_str.c
void	my_err_putchar(char);
void	my_putstr_error(char *);

//my_put_nbr.c
void	my_put_nbr(int);

//my_putstr.c
void	my_putchar(char);
void	my_putstr(char const *);

#endif	/* MY_H_ */
