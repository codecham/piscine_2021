/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:36:38 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/30 18:55:06 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_pustr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_errors(char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		write(2, &message[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_open_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd <= 0)
		return (0);
	return (fd);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	tab[2];
	int		lu;

	if (argc < 2)
		return (ft_errors("File name missing."));
	if (argc > 2)
		return (ft_errors("Too many arguments."));
	fd = ft_open_file(argv[1]);
	if (fd == 0)
		return (ft_errors("Cannot read file."));
	lu = read(fd, tab, 1);
	if (lu == 0)
	{
		close(fd);
		return (0);
	}
	while (lu > 0)
	{
		ft_pustr(tab);
		lu = read(fd, tab, 1);
	}
	close(fd);
}
