#ifndef FTPRINT_H
# define FTPRINT_H

# include <unistd.h>
# include <stddef.h>

int	ft_putchar(int c);
int	ft_putstr(const char *s);
int	ft_putnbr(int nb);
int	ft_strlen(char *s);
int	ft_print_hexa(unsigned int x);
int	ft_print_hexa1(unsigned int x);
int	ft_print_pointer(void *p);
#endif
