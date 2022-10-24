/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:03:08 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/24 14:21:08 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_hexalenptr(unsigned long nbr)
{
	int	res;

	res = 0;
	while (nbr != 0)
	{
		nbr /= 16;
		res++;
	}
	return (res);
}

void	ft_printhexaptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_printhexaptr(n / 16);
		ft_printhexaptr(n % 16);
	}
	else if (n <= 9)
		ft_putchar(n + 48);
	else if (n >= 10 && n <= 15)
		ft_putchar(n + 87);
}	

int	ft_putptr(unsigned long long p)
{
	int	res;

	res = 2;
	if (p == 0)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	ft_printhexaptr(p);
	res += ft_hexalenptr(p);
	return (res);
}
