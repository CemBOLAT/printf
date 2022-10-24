/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:04:22 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/24 15:45:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printfnbr(int nb)
{
	if (nb >= -2147483648)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_printfnbr(147483648);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
			ft_printfnbr(nb);
		}
		else if (nb > 9)
		{
			ft_printfnbr(nb / 10);
			ft_printfnbr(nb % 10);
		}
		else
			ft_putchar(nb + 48);
	}
}

int	ft_putnbr(int nbr)
{
	int	res;

	ft_printfnbr(nbr);
	res = 0;
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
