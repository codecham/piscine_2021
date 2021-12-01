/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 01:13:20 by codecham          #+#    #+#             */
/*   Updated: 2021/12/01 07:01:59 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_separator(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int i;
	int words_count;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (!check_separator(str[i], charset) &&
				check_separator(str[i + 1], charset))
			words_count++;
		i++;
	}
	return (words_count);
}

void	write_words(char *dest, char *from, char *charset)
{
	int i;

	i = 0;
	while (check_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int i;
	int j;
	int words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (check_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (check_separator(str[i + j], charset) == 0)
				j++;
			split[words] = (char *)malloc(sizeof(char) * (j + 1));
			if (!split)
				return ;
			write_words(split[words], str + i, charset);
			i = i + j;
			words++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		words_count;

	words_count = ft_count_words(str, charset);
	split = (char **)malloc(sizeof(char*) * words_count + 1);
	split[words_count] = 0;
	write_split(split, str, charset);
	return (split);
}
