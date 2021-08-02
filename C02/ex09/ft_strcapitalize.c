/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:08:53 by minummin          #+#    #+#             */
/*   Updated: 2020/02/09 15:08:56 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 91 && str[i] > 64)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	*str = *ft_strlowcase(str);
	while (str[i] != '\0')
	{
		while (str[i] < 48 || (str[i] > 57 && str[i] < 97) || str[i] > 122)
			i++;
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] > 47 && str[i] < 58) || (str[i] < 123 && str[i] > 96))
		{
			if (str[i] == '\0')
				return (str);
			i++;
		}
	}
	return (str);
}
