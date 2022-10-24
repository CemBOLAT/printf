/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:37:30 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/24 16:15:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_printunsignedint(unsigned int nb)
{
	if (nb > 9)
	{
		ft_printunsignedint(nb / 10);
		ft_printunsignedint(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_putnbrui(unsigned int nbr)
{
	int	res;

	ft_printunsignedint(nbr);
	if (nbr == 0)
		return (1);
	else if (nbr < 0)
	{
		res = 1;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		res++;
	}
	return (res);
}
