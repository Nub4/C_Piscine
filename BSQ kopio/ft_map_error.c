/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:58:15 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 22:18:51 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int		ft_check_lines(char *str)
{
	int i;
	int count;
	int j;

	i = 0;
	while (str[i] != '\n')
		i++;
	j = i + 1;
	while (str[j] != '\0')
	{
		count = 0;
		while (str[j] != '\n')
		{
			j++;
			count++;
		}
		if (count != g_colums)
		{
			write(1, "map error\n", 10);
			return (0);
		}
		if (str[j] != '\0')
			j++;
	}
	return (1);
}

int		ft_check_rows(void)
{
	if (g_lines < 2)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	else
		return (1);
}

int		ft_check_chars2(char *str)
{
	int count;
	int i;
	int temp;

	temp = g_lines;
	i = 0;
	count = 0;
	while (temp > 0)
	{
		temp = temp / 10;
		count++;
	}
	while (count > 0)
	{
		i++;
		count--;
	}
	g_a = str[i];
	i++;
	g_b = str[i];
	i++;
	g_c = str[i];
	i++;
	i++;
	return (i);
}

int		ft_check_chars(char *str)
{
	int i;

	i = ft_check_chars2(str);
	if ((g_a == g_b) || (g_a == g_c) || (g_b == g_c))
	{
		write(1, "map error\n", 10);
		return (0);
	}
	if (str[i - 1] != '\n')
	{
		write(1, "map error\n", 10);
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] != '\n' && str[i] != g_a && str[i] != g_b && str[i] != g_c)
		{
			write(1, "map error\n", 10);
			return (0);
		}
		i++;
	}
	return (1);
}
