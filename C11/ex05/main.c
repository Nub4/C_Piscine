/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:26:55 by minummin          #+#    #+#             */
/*   Updated: 2020/02/27 15:39:23 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

void	ft_putnbr(int nb)
{
	long int	n;
	char		temp;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	temp = n % 10 + '0';
	write(1, &temp, 1);
}

void	ft_check(int value1, int value2, char *operateur)
{
	if (operateur[0] == '+')
		g_res = value1 + value2;
	else if (operateur[0] == '-')
		g_res = value1 - value2;
	else if (operateur[0] == '*')
		g_res = value1 * value2;
	else
		g_res = 0;
}

int		ft_check2(int value1, int value2, char *operateur)
{
	if (operateur[0] == '/')
	{
		if (value2 == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		g_res = value1 / value2;
	}
	else if (operateur[0] == '%')
	{
		if (value2 == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		g_res = value1 % value2;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		value1;
	char	*operateur;
	int		value2;

	g_index = 0;
	if (argc != 4)
		return (0);
	value1 = ft_atoi(argv[1]);
	operateur = argv[2];
	value2 = ft_atoi(argv[3]);
	while (operateur[g_index] != '\0')
		g_index++;
	if (g_index != 1 && argv[2][0] != '-' && argv[2][0] != '+' &&
			argv[2][0] != '/' && argv[2][0] != '*' && argv[2][0] != '%')
	{
		write(1, "0\n", 2);
		return (0);
	}
	ft_check(value1, value2, operateur);
	if (ft_check2(value1, value2, operateur) == 0)
		return (0);
	ft_putnbr(g_res);
	write(1, "\n", 1);
	return (0);
}
