/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:29:29 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/18 00:07:57 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base)
		return (0);
	while (base[i])
	{
		j = i - 1;
		while (j >= 0)
		{
			if (base[i] == base[j])
				return (0);
			j--;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '\t'
			|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == ' ')
			return (0);
		i++;
	}
	return (i);
}

int	ft_lengh_nbr(char *str, int i, char *base)
{
	int	j;

	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != base[j])
		{
			if (base[j] == '\0')
				return (i - 1);
			j++;
		}
		j = 0;
		i++;
	}
	return (i - 1);
}

int	ft_power(int power, int k, int base_size)
{
	int	nbr;

	nbr = 1;
	if (power == 0)
		return (k);
	while (power > 0)
	{
		nbr = nbr * base_size;
		power--;
	}
	return (nbr * k);
}

int	ft_convert(char *str, char *base, int i, int base_size)
{
	int	j;
	int	k;
	int	power;
	int	nbr;

	j = ft_lengh_nbr(str, i, base);
	nbr = 0;
	k = 0;
	power = 0;
	while (j >= i)
	{
		while (str[j] != base[k])
			k++;
		nbr = nbr + ft_power(power, k, base_size);
		power++;
		k = 0;
		j--;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	long	nbr;
	int		base_size;
	int		neg;
	int		i;

	nbr = 0;
	i = 0;
	base_size = ft_strlen_base(base);
	if (base_size >= 2)
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				neg++;
			i++;
		}
		nbr = ft_convert(str, base, i, base_size);
		if (neg % 2 == 1)
			nbr *= -1;
	}
	return ((int)nbr);
}