/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:04:54 by minummin          #+#    #+#             */
/*   Updated: 2020/02/26 22:39:58 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

void	ft_main2(char *buff)
{
	int **array;
	int max;

	if (ft_check_lines(buff) == 1 && ft_check_rows() == 1 &&
			ft_check_chars(buff) == 1)
	{
		array = ft_create_map(buff);
		array = ft_solve(array);
		max = ft_find_biggest_number(array);
		g_x = ft_find_place_j(array, max);
		g_y = ft_find_place_i(array, max);
		ft_print(buff, max);
	}
}

int		main(int argc, char **argv)
{
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		ret;

	g_counter = 0;
	while (g_counter < argc - 1)
	{
		fd = open(argv[g_counter + 1], O_RDONLY);
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = '\0';
		g_lines = ft_count_lines(buff);
		g_colums = ft_get_index(buff) + 1;
		ft_main2(buff);
		close(fd);
		g_counter++;
		if (g_counter != argc - 1)
			write(1, "\n", 1);
	}
	return (0);
}

int		ft_get_index(char *buff)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (buff[i] != '\n')
		i++;
	i++;
	j = i;
	while (buff[j] != '\n')
		j++;
	j--;
	return (j - i);
}
