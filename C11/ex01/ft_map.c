/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:38:47 by minummin          #+#    #+#             */
/*   Updated: 2020/02/25 17:52:13 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *str;
	int i;

	if (!(str = malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}
