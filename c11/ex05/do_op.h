/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcorenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:33:52 by dcorenti          #+#    #+#             */
/*   Updated: 2021/12/01 06:50:35 by dcorenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
void	ft_sum(int a, int b);
void	ft_minus(int a, int b);
void	ft_multiply(int a, int b);
void	ft_division(int a, int b);
void	ft_modulo(int a, int b);
#endif