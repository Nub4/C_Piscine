/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:00:26 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 22:32:23 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

void	ft_print(char *buff, int max)
{
	int i;
	int j;
	int index;

	i = 0;
	index = 0;
	while (buff[index] != '\n')
		index++;
	index++;
	while (i < g_lines)
	{
		j = 0;
		while (j < g_colums)
		{
			if ((j >= g_x - max + 1 && j <= g_x) &&
					(i >= g_y - max + 1 && i <= g_y))
				buff[index] = g_c;
			j++;
			index++;
		}
		index++;
		i++;
	}
	write(1, &*ft_strstr(buff), ft_strlen(buff));
}

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i + j] != '\0')
		j++;
	return (j);
}

char	*ft_strstr(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i + j] != '\0')
		j++;
	if (!(dest = malloc(sizeof(char) * j + 1)))
		return (NULL);
	j = 0;
	while (str[i + j] != '\0')
	{
		dest[j] = str[i + j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
