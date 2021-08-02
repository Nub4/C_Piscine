/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:13:53 by minummin          #+#    #+#             */
/*   Updated: 2020/02/06 18:23:38 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve(int a, int b, int c, int d);
void	ft_print(int a, int b, int c, int d);
void	ft_putchar(char c);
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	b = 0;
	c = 0;
	d = 1;
	ft_solve(a, b, c, d);
}

void	ft_solve(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (d <= 9)
				{
					ft_print(a, b, c, d);
					d++;
				}
				d = 0;
				c++;
			}
			c = a;
			b++;
			d = b + 1;
		}
		b = 0;
		a++;
		c = a;
		d = b + 1;
	}
}

void	ft_print(int a, int b, int c, int d)
{
	if (a == 9 && b == 8)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(' ');
		ft_putchar(c + '0');
		ft_putchar(d + '0');
	}
	else
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(' ');
		ft_putchar(c + '0');
		ft_putchar(d + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}
