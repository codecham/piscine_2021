/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 00:54:39 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/19 01:03:49 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int n;

	if (power < 1)
		return (1);
	n = nb;
	while (--power)
		n *= nb;
	return (n);
}