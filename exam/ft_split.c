/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 22:33:52 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 22:43:53 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// J'ai pris en compte qu'il n'y a que les espaces qui compte mais c'est possible aussi que les tabulations soit considerer comme des séparateur donc faudra peut-être rajouter les conditions adéquates


char **ft_split(char *str)
{
	int i;
	int j;
	int words;
	char **split;

	i = 0;
	words = 0;
	split = (char **)malloc(sizeof(char *) * 5000); 			//alloue 5000 lignes (c'est suffisant)
	while (str[i])
	{
		if (str[i] == ' ')										//tant qu'on est sur un espace on avance
			i++;
		else													//Si on est plus sur un espace c'est le début d'un mot
		{
			j = 0;
			split[words] = (char *)malloc(sizeof(char) * 5000); // alloue 5000 aussi
			while (str[i] && str[i] != ' ')						// tant qu'on est pas a la fin ou sur un spératateur
			{
				split[words][j] = str[i];						// copie la string avec j qui commence à 0 pour la nouvelle
				i++;
				j++;
			}
			split[words][j] = '\0';								// caractere null pour la fin de la string
			words++;											// incremente notre index de mot
		}
	}
	split[words] = 0;
	return (split);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	char **split;

	i = 0;
	split = ft_split(argv[1]);
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}