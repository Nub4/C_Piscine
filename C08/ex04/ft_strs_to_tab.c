/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 21:57:16 by minummin          #+#    #+#             */
/*   Updated: 2020/02/19 22:29:55 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strdup(char *str)
{
	char	*new;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (!(new = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*param;
	int			i;
	int			j;

	if (!(param = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] != 0 && i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		param[i].size = j;
		param[i].str = av[i];
		param[i].copy = ft_strdup(av[i]);
		i++;
	}
	param[i].size = 0;
	param[i].str = 0;
	param[i].copy = 0;
	return (param);
}
