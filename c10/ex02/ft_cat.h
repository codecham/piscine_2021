/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:03:10 by dcorenti          #+#    #+#             */
/*   Updated: 2021/11/30 19:43:34 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>
#include <stdio.h>

int		ft_display_file(char *path);
void	ft_putstr_fd(char *str, int fd);
void	ft_puterr(char *exec_name, char *path, char *error);


#endif