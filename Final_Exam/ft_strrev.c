/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:36:30 by exam              #+#    #+#             */
/*   Updated: 2020/02/28 12:37:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int k;
	int half;
	char temp;

	j = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	k = i;
	half = i / 2;
	i--;
	while (i >= half)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j++;
		i--;
	}
	str[k] = '\0';
	return (str);
}
