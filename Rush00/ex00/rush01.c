/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 10:47:30 by minummin          #+#    #+#             */
/*   Updated: 2020/02/09 20:22:55 by amortier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (j++ < y - 1)
	{
		while (i++ < x - 1)
		{
			if (j == 0 && i == 0)
				ft_putchar('/');
			else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
				ft_putchar('\\');
			else if (j == y - 1 && i == x - 1)
				ft_putchar('/');
			else if ((j == 0 || j == y - 1) && (i > 0 && i < x - 1))
				ft_putchar('*');
			else if ((i == 0 || i == x - 1) && (j > 0 && j < y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i = -1;
	}
}
