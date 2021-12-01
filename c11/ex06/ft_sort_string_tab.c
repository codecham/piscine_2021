/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 07:03:55 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 07:12:33 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return(s1[i] = s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = *s1;
}

void	ft_sort_string_tab(char **tab)
{
	int	size;
	int	i;
	int j;

	size = 0;
	i = 0;
	while (tab[size])
		size++;
	while (i < size)
	{
		j = 0;
		while(j < size - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
		}
		i++;
	}
}