/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:40:09 by minummin          #+#    #+#             */
/*   Updated: 2020/02/27 19:48:55 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int up;
	int down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			up++;
		if (f(tab[i], tab[i + 1]) > 0)
			down++;
		i++;
	}
	if (down == 0 || up == 0)
		return (1);
	return (0);
}
