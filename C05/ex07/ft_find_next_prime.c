/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:17:24 by minummin          #+#    #+#             */
/*   Updated: 2020/02/13 17:56:20 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 3)
		return (2);
	if (nb == 3)
		return (3);
	while (i <= nb / i)
	{
		while (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
