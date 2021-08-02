/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:43:26 by minummin          #+#    #+#             */
/*   Updated: 2020/02/13 15:11:02 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max);

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	if (max - min > 2147483647)
		return (0);
	i = max - min;
	tab = malloc(sizeof(int) * i);
	if (tab == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
