/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:45:32 by cbolat            #+#    #+#             */
/*   Updated: 2022/10/19 18:17:51 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	va_start (args, str);

	printf("%c", va_arg(args,in)));
	va_end (args);
	return (0);
}

int main(int argc, char **argv)
{
	const char *s = "%s";

	ft_printf(s, "cemal");
}
//toplam bastırdığı karakteri cevap olarak döndürür.
// va_arg char almaz int alır 
