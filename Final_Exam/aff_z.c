/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:02:35 by exam              #+#    #+#             */
/*   Updated: 2020/02/28 10:10:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_aff(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('z');
		ft_putchar('\n');
		return (0);
	}
	ft_aff(argv[1]);
	ft_putchar('\n');
	return (0);
}

void	ft_aff(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'z')
		{
			ft_putchar(str[i]);
			return ;
		}
		i++;
	}
	ft_putchar('z');
}
