/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:40:01 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 06:48:45 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_sum(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_division(int a, int b)
{
	if (b != 0)
		ft_putnbr(a / b);
	else
		ft_putstr("Stop : divison by zero");
}

void	ft_modulo(int a, int b)
{
	if (b != 0)
		ft_putnbr(a % b);
	else
		ft_putstr("Stop : modulo by zero");
}