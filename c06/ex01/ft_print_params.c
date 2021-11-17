/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:18:25 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/18 00:25:39 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = -1;
	if (argc <= 1)
		return (0);
	while (argv[++i])
	{
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
		j = -1;
	}
}