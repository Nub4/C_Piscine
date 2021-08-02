/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_includes.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:31:21 by minummin          #+#    #+#             */
/*   Updated: 2020/02/27 15:38:29 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INCLUDES_H
# define FT_INCLUDES_H

# include <unistd.h>

int g_res;
int g_index;

int		ft_check2(int value1, int value2, char *operateur);
void	ft_check(int value1, int value2, char *operateur);
int		ft_check_sign(char *nbr);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);

#endif
