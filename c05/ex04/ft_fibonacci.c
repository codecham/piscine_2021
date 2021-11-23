/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 00:04:15 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/23 00:08:18 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return(-1);
	if (nb <= 2)
		return(nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}