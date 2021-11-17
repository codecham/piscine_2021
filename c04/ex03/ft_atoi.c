/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:16:29 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/17 22:35:37 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char *str, int i)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_is_neg(char *str, int i, int *neg)
{
	int	n;

	n = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	if (n % 2 == 1)
		*neg = 1;
	return (i);
}

int	ft_atoi(char *str)
{
	int		i;
	long	nb;
	int		neg;

	i = 0;
	neg = 0;
	if (!str)
		return (0);
	i = ft_is_space(str, i);
	i = ft_is_neg(str, i, &neg);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (neg == 1)
		nb *= -1;
	return ((int)nb);
}