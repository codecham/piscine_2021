/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:00:31 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/02 22:31:55 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Le but d'itoa est de convertir un nombre dans une string. C'est à peu près comme un putnbr sauf que tu stock le résultat dans un tableau alloué dynamiquement au lieu de l'afficher.

*/

#include <stdlib.h>
#include <stdio.h>

int ft_calcul_div_size(long nbr) 					// Fonction qui calcul la taille de notre diviseur
{
	int div_size;

	div_size = 1;									// Le faire commencer à 1 et pas à 0!!
	while (nbr / 10 != 0)							// Tant que notre nombre / 10 != 0
	{
		div_size = div_size * 10;					// On multiplie notre div par 10 
		nbr = nbr / 10;								// On divise notre nombre par 10
	}
	return (div_size);

}

char *ft_itoa(int nbr)
{
	int		i;										// index pour la string
	long 	long_nbr;								// on travail avec ce long pour éviter les probleme d'int_min
	int		div;									// diviseur qui nous servira a sortir les chiffre du nombre un par un
	char 	*result;								// string qui stockera le resultat

	i = 0;
	long_nbr = nbr;									// On copie la valeur du nombre dans notre long
	result = (char *)malloc(sizeof(char) * 40);		// On Malloc 40 char (c'est suffisant)
	if (long_nbr == 0)								// Le 0 est toujours un cas spécialement chiant à traiter donc on fait une condition rien que pour lui
	{
		result[0] = '0';							// On y place le '0' (en caractere hein.. pas en int)
		result[1] = '\0';							// On y place le \0
		return(result);								// On retourne le resultat
	}
	if (long_nbr < 0)								// Si notre long est négatif
	{
		long_nbr *= -1;								// On le change en positif
		result[i] = '-';							// On y place notre '-' en début de chaine
		i++;										// On incrémente le i pour se placer au prochain index et pas effacer le '-'
	}
	div = ft_calcul_div_size(long_nbr);				// On calcul la taille de notre diviseur (Bien faire ça aprés avec changer le nombre en positif si besoin)
	while (div > 0)									// Tant que notre div est plus grand que 0 on effectue la conversion
	{
		result[i] = long_nbr / div + '0';			// On place dans notre string le nombre divisé par div + '0' pour passer en char
		long_nbr = long_nbr % div;					// On fait notre nombre % div pour enlever le premier chiffre
		div = div / 10;								// On divise notre div par 10
		i++;										// On incremente le i pour le caractere suivant
	}
	result[i] = '\0';								// On oublie JAMAIS le '\0'
	return (result);
}

int main(int argc, char **argv)
{
	printf("--> |%s|\n", ft_itoa(atoi(argv[1])));
}