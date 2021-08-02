/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:21:37 by exam              #+#    #+#             */
/*   Updated: 2020/02/28 13:40:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *tab;
	int len;
	int i;
	int temp_start;
	int temp_end;

	temp_start = start;
	temp_end = end;
	i = 0;
	len = end - start;
	if (len < 0)
		len = -len;
	if (!(tab = malloc(sizeof(int) * len)))
		return (0);
	while (i <= len)
	{
		if (temp_start <= temp_end)
		{
			tab[i] = start;
			i++;
			start++;
		}
		else
		{
			tab[i] = start;
			i++;
			start--;
		}
	}
	return (tab);
}
