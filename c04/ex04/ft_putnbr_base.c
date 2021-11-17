/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:36:17 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/17 23:08:43 by dcorenti         ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	char	result[32];
	int		i;

	i = 0;
	size = ft_strlen_base(base);
	if (nbr == 0 && size >= 2)
		write(1, &base[0], 1);
	else if (size >= 2)
	{
		while (nbr > 0)
		{
			result[i] = base[nbr % size];
			nbr = nbr / size;
			i++;
		}
		i++;
		while (--i >= 0)
			write(1, &result[i], 1);
	}
}