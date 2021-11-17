/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:21:19 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/17 00:41:25 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return ;
	i = -1;
	while (str[++i])
	{
		if (str[i] <= 31 || str[i] >= 127)
			ft_print_hexa(str[i]);
		else
			ft_putchar(str[i]);
	}
}