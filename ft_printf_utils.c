#include "ft_printf.h"

int ft_putchar(int c)
{
    return(write(1,&c,1));
}

int ft_string(char *str)
{
    size_t i;

    i = 0;

    if(!str)
        return(write(1,"\0",1));
    while(str[i])
    {
        write(1,&str[i],1);
        i++;
    }
    return(i);
}

int ft_int(int x)
{
    size_t i;
    char *p_int;
    i = 0;
    p_int = ft_itoa(x);

    while(p_int[i])
    {
        ft_putchar(i);
        i++;
    }
    return(i);
}
