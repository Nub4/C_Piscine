/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:20:58 by minummin          #+#    #+#             */
/*   Updated: 2020/02/09 16:23:34 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);
void	ft_print_hexa(unsigned char a);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char a)
{
	char *hexa;

	hexa = "0123456789abcdef";
	if (a > 15)
	{
		ft_print_hexa(a / 16);
		ft_print_hexa(a % 16);
	}
	else
		ft_putchar(hexa[a]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		res;
	char	*hexa;

	hexa = "0123456789abcdef";
	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 0 && str[i] < 32)
		{
			ft_putchar(92);
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
