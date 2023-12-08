#include "ft_printf.h"

int ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if(*s == (char)c)
            return(1);
        s++;
    }
    if (*s == (char)c)
        return(1);
    return (0);
}