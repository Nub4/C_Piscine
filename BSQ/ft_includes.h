/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_includes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 21:26:59 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 21:35:02 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INCLUDES_H
# define FT_INCLUDES_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 8300000

int		g_counter;
int		g_x;
int		g_y;
char	g_a;
char	g_b;
char	g_c;
int		g_lines;
int		g_colums;

void	ft_main2(char *buff);
int		ft_check_chars2(char *str);
int		ft_check_chars(char *str);
int		ft_check_rows(void);
int		ft_check_lines(char *str);
int		ft_strlen(char *str);
char	*ft_strstr(char *str);
int		**ft_while_loop(int **map, char *buff, int i);
void	ft_print(char *buff, int max);
int		**ft_solve(int **array);
int		ft_get_index(char *buff);
int		**ft_create_map(char *buff);
int		ft_count_lines(char *buff);
int		ft_find_biggest_number(int **array);
int		ft_find_place_i(int **array, int max);
int		ft_find_place_j(int **array, int max);
int		ft_check(int **array, int x, int y);

#endif
