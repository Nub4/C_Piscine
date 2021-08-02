/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:21:34 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 22:19:03 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int		ft_check(int **array, int x, int y)
{
	int i;
	int j;
	int a;
	int b;
	int c;

	i = x;
	j = y;
	a = array[j][i - 1];
	b = array[j - 1][i];
	c = array[j - 1][i - 1];
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

int		**ft_solve(int **array)
{
	int i;
	int j;

	i = 0;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_colums)
		{
			if (array[i][j] == 0)
				array[i][j] = 0;
			else if (i != 0 && j != 0)
				array[i][j] = 1 + ft_check(array, j, i);
			j++;
		}
		i++;
	}
	return (array);
}
