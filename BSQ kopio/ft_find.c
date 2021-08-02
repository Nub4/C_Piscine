/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:32:08 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 22:18:16 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int		ft_find_biggest_number(int **array)
{
	int i;
	int j;
	int max;

	max = 0;
	i = 0;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_colums)
		{
			if (max < array[i][j])
				max = array[i][j];
			j++;
		}
		i++;
	}
	return (max);
}

int		ft_find_place_i(int **array, int max)
{
	int i;
	int j;

	i = 0;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_colums)
		{
			if (array[i][j] == max)
			{
				free(array);
				return (i);
			}
			j++;
		}
		i++;
	}
	free(array);
	return (0);
}

int		ft_find_place_j(int **array, int max)
{
	int i;
	int j;

	i = 0;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_colums)
		{
			if (array[i][j] == max)
				return (j);
			j++;
		}
		i++;
	}
	return (0);
}
