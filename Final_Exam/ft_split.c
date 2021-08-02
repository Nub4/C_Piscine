/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:44:23 by exam              #+#    #+#             */
/*   Updated: 2020/02/28 16:45:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str);
int		ft_word_count(char *str);
int		ft_word_size(char *str);

int		ft_word_size(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
	{
		str++;
		i++;
		if (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
			return (i);
	}
	return (i);
}

int		ft_word_count(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	if (str[i] == '\0')
		return (0);
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		count++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char **words;
	char *word;
	int i;
	int j;
	int nbr;
	int count;

	count = ft_word_count(str);
	if (!(words = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
		str++;
	i = 0;
	nbr = 0;
	while (nbr < count)
	{
		j = 0;
		if (!(word = malloc(sizeof(char) * ft_word_size(str) + 1)))
			return (NULL);
		while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'))
			str++;
		while (str[j] != '\0' && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
		{
			word[j] = str[j];
			j++;
		}
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		word[j] = '\0';
		words[nbr] = word;
		nbr++;
	}
	words[nbr] = NULL;
	return (words);
}
