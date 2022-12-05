/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:30:46 by sguntepe          #+#    #+#             */
/*   Updated: 2022/12/04 18:03:27 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int	ft_printf(const char *src, ...)
{
	size_t	i;
	va_list	arg;

	va_start(arg, src);
	i = 0;
	while (src[i])
	{
		if (src[i] == '%')
		{
			ft_format (src[i++], arg);
			i++;
		}
		else
			write (1, &src[i++], 1);
	}
	va_end (arg);
	return (0);
}

int	main ()
{
	char *str = "Ecole";
	char c = '\0';
	int number = 2147483647;
	unsigned int	ui = 4294967295;
	printf("%c",c);
}

int	ft_format(char c, va_list arg)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 's')
		return (ft_string(va_arg(arg, char *)));
	else if (c == 'p')
		return (ft_ptr(va_arg(arg, unsigned long), 1));
	else if (c == 'i' || c == 'd')
		return (ft_int(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_unsigned(va_arg((arg), unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_hex(va_arg((arg), unsigned int), c));
	else
		return (ft_string("%"));
}

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}
