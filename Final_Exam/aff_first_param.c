/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:39:53 by exam              #+#    #+#             */
/*   Updated: 2020/02/28 10:48:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_aff_first_param(char **words);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_aff_first_param(argv);
	ft_putchar('\n');
	return (0);
}

void	ft_aff_first_param(char **words)
{
	int i;

	i = 0;
	while (words[1][i] != '\0')
	{
		ft_putchar(words[1][i]);
		i++;
	}
}
