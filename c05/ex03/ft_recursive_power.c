/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:04:44 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/22 23:58:37 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
	// printf("nb = %d && power = %d && !power = %d\n", nb, power, !power);
	if (power < 1)
		return (!power);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main(int argc, char **argv)
{
	printf("%d\n", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}