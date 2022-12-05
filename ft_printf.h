/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:30:20 by sguntepe          #+#    #+#             */
/*   Updated: 2022/12/04 15:40:53 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putchar(int c);
int	ft_string(char *str);
int	ft_int(int x);
int	ft_format(char c, va_list arg);
int	ft_ptr(unsigned long a, int sign);
int	ft_unsigned(unsigned int a);
int	ft_hex(unsigned int a, char c);

#endif
