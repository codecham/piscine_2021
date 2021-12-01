/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:36:38 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/30 19:44:26 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_putstrn(char *str, int n)
{
	int i;

	i = 0;
	while (str[i] && i < n)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_open_file(char *file)
{
	int	fd;

	fd = open(file, O_DIRECTORY);
	if (fd != -1)
		return (0);
	fd = open(file, O_RDONLY);
	if (fd <= 0)
		return (0);
	return (fd);
}

int	ft_display_file(char *path)
{
	int		fd;
	char	tab[2048];
	int		lu;

	fd = ft_open_file(path);
	if (fd == 0)
		return (0);
	lu = read(fd, tab, 2048);
	if (lu == 0)
	{
		close(fd);
		return (0);
	}
	while (lu > 0)
	{
		ft_putstrn(tab, lu);
		lu = read(fd, tab, 1);
	}
	close(fd);
	return (1);
}
