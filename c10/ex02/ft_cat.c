/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:06:14 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 05:52:21 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int main(int argc, char **argv)
{
	char	*exec_name;
	int		i;

	i = 0;
	exec_name = basename(argv[0]);
	if (argc < 2)
		ft_puterr(exec_name, NULL, strerror(errno));
	while (++i < argc)
	{
		if (argv[i][0] != '-')
		{
			if (ft_display_file(argv[i]) == 0)
				ft_puterr(exec_name, argv[i], strerror(errno));
		}
	}
	return (0);
}