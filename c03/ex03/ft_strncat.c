/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:19:51 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/17 01:36:40 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

 char	*ft_strncat(char *dest, char *src, unsigned int nb)
 {
	int	i;
	int j;
	
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i + j] = src[i];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
 }

 int main(int argc, char **argv)
 {
	char src[6] = "world";
	char *dest;
	char *my_dest;

	dest = (char *)malloc(sizeof(char) * 20);
	my_dest = (char *)malloc(sizeof(char) * 20);
	dest = strncat(dest, src, (unsigned int)atoi(argv[1]));
	my_dest = ft_strncat(dest, src, (unsigned int)atoi(argv[1]));
	printf("real: %s\nmyyy: %s\n", dest, my_dest);
 }
