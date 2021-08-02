/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:03:59 by minummin          #+#    #+#             */
/*   Updated: 2020/02/13 16:10:04 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (max - min > 2147483647)
		return (-1);
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (tab == 0)
		return (0);
	size = 0;
	while (min < max)
	{
		tab[size] = min;
		size++;
		min++;
	}
	*range = tab;
	return (size);
}
