/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:02:39 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 06:05:43 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	i = 0;
	if (length < 1)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}