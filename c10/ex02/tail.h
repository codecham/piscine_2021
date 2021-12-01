/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 17:28:07 by codecham          #+#    #+#             */
/*   Updated: 2021/12/01 09:14:41 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAIL_H
# define TAIL_H

# include "unistd.h"
# include "stdlib.h"
# include "limits.h"
# define BUFFER_SIZE 32

int		get_next_line(int fd, char **line);
int		ft_strlen(char *str);
int		is_line(char *save);
int		ft_error(char **save, char *temp, int fd);
void	ft_copy_line(char *save, char *new, int i, int j);

#endif
