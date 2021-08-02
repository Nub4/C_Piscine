/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:45:50 by minummin          #+#    #+#             */
/*   Updated: 2020/02/20 17:43:31 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_temp;
int g_count = 0;
int g_a;

int		ft_check_base(char *base);
int		ft_atoi_base(char *nbr, char *base, int base_len);
int		get_nb(char c, char *base);
int		ft_check_sign(char *nbr);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_itoa(char *result, char *base_to, int base_to_len, int res);

int		ft_atoi_base(char *nbr, char *base, int base_len)
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
	while (nbr[i] == ' ' || nbr[i] == '\t' || nbr[i] == '\n' ||
			nbr[i] == '\v' || nbr[i] == '\f' || nbr[i] == '\r')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
		i++;
	sign = ft_check_sign(nbr);
	while (nbr[i] != '\0' && (nbr[i] >= 48 && nbr[i] <= base_len + 48))
	{
		res = res * base_len + get_nb(nbr[i], base);
		i++;
	}
	return (res * sign);
}

char	*ft_itoa(char *result, char *base_to, int base_to_len, int res)
{
	while (g_temp > 0)
	{
		g_temp = g_temp / base_to_len;
		g_count++;
	}
	g_a = g_count;
	g_temp = res;
	if (res < 0)
	{
		g_count++;
		res = res * (-1);
	}
	if (!(result = malloc(sizeof(char) * g_a + 1)))
		return (NULL);
	while (g_count > 0)
	{
		result[g_count - 1] = base_to[res % base_to_len];
		res = res / base_to_len;
		g_count--;
	}
	if (g_temp < 0)
		result[g_count] = '-';
	result[g_a + 1] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		res;
	int		base_from_len;
	int		base_to_len;

	result = NULL;
	base_from_len = 0;
	base_to_len = 0;
	while (base_from[base_from_len] != '\0')
		base_from_len++;
	while (base_to[base_to_len] != '\0')
		base_to_len++;
	if (ft_check_base(base_from) == 0)
		return (0);
	if (ft_check_base(base_to) == 0)
		return (0);
	if (nbr[0] == '\0' || base_from[0] == '\0' || base_to[0] == '\0' ||
			base_from[1] == '\0' || base_to[1] == '\0')
		return (NULL);
	res = ft_atoi_base(nbr, base_from, base_from_len);
	if (res < 0)
		g_temp = -res;
	else
		g_temp = res;
	return (ft_itoa(result, base_to, base_to_len, res));
}

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
