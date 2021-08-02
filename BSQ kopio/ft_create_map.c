/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 23:12:13 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 22:19:41 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int		ft_count_lines(char *buff)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (buff[i] != '\0')
	{
		if (buff[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int		**ft_create_map(char *buff)
{
	int b;
	int i;
	int **map;

	b = 0;
	i = 0;
	if (!(map = (int **)malloc(sizeof(int *) * g_lines)))
		return (0);
	while (buff[i] != '\n')
		i++;
	i++;
	while (b < g_lines)
	{
		if (!(map[b] = malloc(sizeof(int) * g_colums)))
			return (0);
		b++;
	}
	return (ft_while_loop(map, buff, i));
}

int		**ft_while_loop(int **map, char *buff, int i)
{
	int b;
	int k;

	b = 0;
	while (buff[i] != '\0')
	{
		k = 0;
		while (buff[i] != '\n' && buff[i] != '\0')
		{
			if (buff[i] == g_a)
				map[b][k] = 1;
			else
				map[b][k] = 0;
			k++;
			i++;
		}
		b++;
		if (buff[i] != '\0')
			i++;
	}
	return (map);
}
