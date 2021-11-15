/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <dcorenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:07:29 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/15 23:53:49 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	long nbr;
	int div;
	char c;

	nbr = nb;
	div = 1;
	if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		while (nbr/div > 10)
		{
			printf("nbr/div = %ld\n", nbr/div);
			div *= 10;
		}
		printf("div = %d\n", div);
		while (div >= 1)
		{
			c = (nbr/div) + '0';
			write(1, &c, 1);
			nbr = nbr%div;
			div /= 10;
		}
	}
}

int main(int argc, char **argv)
{
	ft_putnbr(atoi(argv[1]));
	// ft_putnbr(INT_MIN);
	write(1, "\n", 1);
}