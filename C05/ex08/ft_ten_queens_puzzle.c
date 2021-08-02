/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 19:39:46 by minummin          #+#    #+#             */
/*   Updated: 2020/02/12 17:23:07 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int g_count = 0;

int		ft_check2(int arr[10][10], int y, int x);
void	ft_print(int arr[10][10]);
void	ft_solve(int arr[10][10], int y);
int		ft_check(int arr[10][10], int y, int x);
int		ft_ten_queens_puzzle(void);

int		ft_ten_queens_puzzle(void)
{
	int arr[10][10];
	int i;
	int j;
	int y;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			arr[j][i] = 0;
			i++;
		}
		j++;
	}
	y = 0;
	ft_solve(arr, y);
	return (g_count);
}

void	ft_print(int arr[10][10])
{
	char	temp;
	int		i;
	int		j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 10)
		{
			if (arr[i][j] == 1)
			{
				temp = i + '0';
				write(1, &temp, 1);
			}
			i++;
		}
		j++;
	}
	write(1, "\n", 1);
}

void	ft_solve(int arr[10][10], int y)
{
	int x;

	x = 0;
	if (y == 10)
	{
		ft_print(arr);
		g_count++;
		return ;
	}
	while (x < 10)
	{
		if (ft_check(arr, y, x) == 1)
		{
			arr[x][y] = 1;
			ft_solve(arr, y + 1);
			arr[x][y] = 0;
		}
		x++;
	}
	return ;
}

int		ft_check2(int arr[10][10], int y, int x)
{
	int i;
	int j;

	i = x;
	j = y;
	while (j >= 0 && i >= 0)
	{
		if (arr[i][j] == 1)
			return (0);
		j--;
		i--;
	}
	return (1);
}

int		ft_check(int arr[10][10], int y, int x)
{
	int i;
	int j;

	i = x;
	j = y;
	while (j >= 0)
	{
		if (arr[i][j] == 1)
			return (0);
		j--;
	}
	if (ft_check2(arr, y, x) == 0)
		return (0);
	j = y;
	while (j >= 0 && i <= 9)
	{
		if (arr[i][j] == 1)
			return (0);
		j--;
		i++;
	}
	return (1);
}
