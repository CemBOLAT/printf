/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:29:14 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/24 14:21:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_itoa(int nbr);
int		ft_putchar(char c);
int		ft_format(const char c, va_list args);
int		ft_putnbr(int nbr);
int		ft_putstr(const char *c);
int		ft_putnbr(int nbr);
int		ft_print_unsigned(unsigned int n);
int		ft_putnbrhexa(char c, unsigned int nbr);
int		ft_putptr(unsigned long long nbr);

#endif
