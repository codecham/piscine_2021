/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:26:31 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/18 00:32:11 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;

	i = -1;
	if (argc <= 1)
		return (0);
	while (--argc > 0)
	{
		while (argv[argc][++i])
			write(1, &argv[argc][i], 1);
		write(1, "\n", 1);
		i = -1;
	}
}