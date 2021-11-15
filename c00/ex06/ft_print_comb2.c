/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <dcorenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:52:34 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/15 23:06:36 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n < 10)
	{
		write(1, "0", 1);
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		c = (n / 10) + 48;
		write(1, &c, 1);
		c = (n % 10) + 48;
		write(1, &c, 1);
	}
}

void 	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				ft_putnbr(a);
				write(1, " ", 1);
				ft_putnbr(b);
				if (a != 98 || b != 99)
					write(1, ", ", 2);
			}
			b++;
		}
		b = 0;
		a++;
	}
}
