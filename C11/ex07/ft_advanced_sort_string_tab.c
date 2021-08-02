/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 23:08:00 by minummin          #+#    #+#             */
/*   Updated: 2020/02/27 16:01:05 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i + 1] != '\0' && tab[0] != '\0')
	{
		j = i + 1;
		if (cmp(tab[i], tab[j]) < 0)
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i = 0;
		}
		i++;
	}
}
