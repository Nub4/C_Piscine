/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 12:22:28 by minummin          #+#    #+#             */
/*   Updated: 2020/02/06 15:18:32 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_combn(int n);
void	ft_solve(int array[], int data[], int n, int start);

void	ft_print_combn(int n)
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int data[n];
	int j;
	int start;

	start = 0;
	ft_solve(array, data, n, j, start);
}

void	ft_solve(int array[], int data[], int n, int start)
{
	int i;
	int j;

	if (start == n)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(data[i] + '0');
			i++;
		}
		if (data[0] != 10 - n)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	j = start;
	while (j < 10)
	{
		data[start] = array[j];
		ft_solve(array, data, n, start + 1);
		j++;
	}
}
