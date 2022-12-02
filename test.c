#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_write(char c, va_list arg)
{
    int i;
    char *str;

    i = 0;
    if (c == 's')
    {
        str = va_arg(arg, char *);
        while (str[i])
            write(1, &str[i++], 1);
    }
    return (i);
}

int ft_printf(char *src, ...)
{
    va_list arg;
    int     i;

    i = 0;
    va_start(arg, src);
    while (src[i])
    {
        if (src[i] == '%')
        {
            ft_write(src[++i], arg);
            i++;
        }
        else
            write(1, &src[i++], 1);
    }   
    va_end (arg);
    return (0);
}

int main()
{
    char *a = "baki";
    char *b = "erdogan";
    ft_printf("burak %s %s\n", a, b);
    return (0);
}
