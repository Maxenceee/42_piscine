/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:01:24 by mgama             #+#    #+#             */
/*   Updated: 2022/09/19 19:01:28 by mgama            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int			check_separator(char c, char *charset);
int			count_strings(char *str, char *charset);
int			ft_strlen_sep(char *str, char *charset);
char		*ft_word(char *str, char *charset);
char		**ft_split(char *str, char *charset);

void		print_error(char *error);
void		ft_print(char *msg);
void		ft_print_char(char msg);
void		board_printer(t_board board);

int			min(int a, int b);
int			ft_max_cell(t_board *board);
void		ft_final_board(t_board *board,int dr);
void		ft_solver_board(t_board *board);

#endif
