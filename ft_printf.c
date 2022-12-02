/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:30:46 by sguntepe          #+#    #+#             */
/*   Updated: 2022/12/02 15:32:07 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *src, ...)
{
    size_t i;
    va_list arg;

    va_start(arg,src);
    i = 0;
    while(src[i])
    {
        if(src[i] == '%')
        {
            ft_format(src[i++],arg);
            i++;
        }
        else
            write(1,&src[i++],1);
    }
    va_end(arg);
    return (0);
}

int main()
{
    char *str = "Ecole";
    int number = 42;
    
    printf("Hi! %s %i %d",str,number,number);
}

int ft_format(char c,va_list arg)
{
    int i;

    i = 0;
    if(c == 'c')
    {
        return (ft_putchar(va_arg(arg, int)));
    }
    else if(c == 'i' || c == 'd')
    {
        return(ft_int(va_arg(arg,int)));
    }
    return (i);
}