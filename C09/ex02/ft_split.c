/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minummin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:26:42 by minummin          #+#    #+#             */
/*   Updated: 2020/02/23 19:31:08 by minummin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		ft_check_sep(char c, char *charset);
int		ft_word_size(char *str, char *charset);
int		ft_word_count(char *str, char *charset);
char	**ft_solve(char *str, char *charset, char **words, int count);

int		ft_check_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		ft_word_count(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (str[i] != '\0' && ft_check_sep(str[i], charset) == 0)
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_check_sep(str[i], charset) == 0)
		{
			i++;
			if (str[i] != '\0' && ft_check_sep(str[i], charset) == 1)
				count++;
		}
		if (str[i] == '\0')
			break ;
		i++;
	}
	return (count);
}

int		ft_word_size(char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	while (*str != '\0' && ft_check_sep(*str, charset) == 0)
		str++;
	while (*str != '\0')
	{
		j = 0;
		while (*str != '\0' && ft_check_sep(*str, charset) == 0)
		{
			i++;
			j++;
			str++;
			if (ft_check_sep(*str, charset) == 1)
				return (i - j);
		}
		i++;
		str++;
	}
	return (i);
}

char	**ft_solve(char *str, char *charset, char **words, int count)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	while (i < count)
	{
		j = 0;
		if (!(word = malloc(sizeof(char) * ft_word_size(str, charset) + 1)))
			return (NULL);
		while (*str != '\0' && ft_check_sep(*str, charset) == 0)
			str++;
		while (str[j] != '\0' && ft_check_sep(str[j], charset) == 1)
		{
			word[j] = str[j];
			j++;
		}
		while (*str != '\0' && ft_check_sep(*str, charset) == 1)
			str++;
		word[j] = '\0';
		words[i] = word;
		i++;
	}
	words[i] = NULL;
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		count;

	count = 0;
	count = ft_word_count(str, charset);
	if (!(words = (char **)malloc(sizeof(char *) * count + 1)))
		return (NULL);
	return (ft_solve(str, charset, words, count));
}
