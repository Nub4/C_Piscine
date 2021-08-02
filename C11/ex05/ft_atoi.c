/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:48:27 by minummin          #+#    #+#             */
/*   Updated: 2020/02/27 15:33:49 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_includes.h"

int		ft_check_sign(char *nbr)
{
	int i;
	int sign;
	int count;
	int count2;

	count = 0;
	i = 0;
	count2 = 0;
	sign = 1;
	while (nbr[i] == ' ' || nbr[i] == '\t' || nbr[i] == '\n' ||
			nbr[i] == '\v' || nbr[i] == '\f' || nbr[i] == '\r')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			count++;
		else
			count2++;
		i++;
	}
	if (count > 0 && count >= count2)
		sign = -1;
	if (count % 2 == 0)
		sign = 1;
	return (sign);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int res;
	int count;
	int count2;

	count = 0;
	count2 = 0;
	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	sign = ft_check_sign(str);
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
