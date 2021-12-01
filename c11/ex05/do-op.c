/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:32:23 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 06:57:17 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_get_op(char *str)
{
	if (!str || str[1])
		return (-1);
	if (str[0] == '+')
		return (0);
	if (str[0] == '-')
		return (1);
	if (str[0] == '*')
		return (2);
	if (str[0] == '/')
		return (3);
	if (str[0] == '%')
		return (4);
	return (-1);
}

int main(int argc, char **argv)
{
	void	(*tab[5])(int, int);
	int		op;

	tab[0] = &ft_sum;
	tab[1] = &ft_minus;
	tab[2] = &ft_multiply;
	tab[3] = &ft_division;
	tab[4] = &ft_modulo;
	if (argc == 4)
	{
		op = ft_get_op(argv[2]);
		if (op == -1)
		{
			ft_putstr("0");
			return (0);
		}
		tab[op](ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}