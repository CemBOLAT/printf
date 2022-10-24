/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:28:54 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/24 16:03:29 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(int i, const char *str, va_list args)
{
	int	res;

	res = 0;
	if (str[i] != '\0' && str[i] == '%')
		res += ft_putchar(str[i]);
	else if (str[i] != '\0' && str[i] == 'c')
		res += ft_putchar(va_arg(args, int));
	else if (str[i] != '\0' && str[i] == 's')
		res += ft_putstr(va_arg(args, char *));
	else if (str[i] != '\0' && (str[i] == 'd' || str[i] == 'i'))
		res += ft_putnbr(va_arg(args, int));
	else if (str[i] != '\0' && str[i] == 'u')
		res += ft_putnbrui(va_arg(args, unsigned int));
	else if (str[i] != '\0' && (str[i] == 'x' || str[i] == 'X'))
		res += ft_putnbrhexa(str[i], va_arg(args, unsigned int));
	else if (str[i] != '\0' && str[i] == 'p')
		res += ft_putptr(va_arg(args, unsigned long long));
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		res;
	va_list	args;
	int		i;

	i = 0;
	res = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			res += ft_format(i, str, args);
		}
		else
			res += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (res);
}

// printf("cemal");

int main()
{
	char *p = "cemal";
	ft_printf("//%d//",ft_printf("cemal%d %c %% %s %d %d %u %u %p %x %X",42,'a',"cemal",-123,0,42,0,p,213,12));
	ft_printf("\n");
    printf("//%d//",printf("cemal%d %c %% %s %d %d %u %u %p %x %X",42,'a',"cemal",-123,0,42,0,p,213,12));
}

