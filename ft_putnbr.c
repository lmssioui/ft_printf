#include "libftprintf.h"

int	ft_putnbr(int nb)
{
	long n;
	long n1;
	unsigned int c;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');	
	
	n1 = nb;
	c = 1;
	if( n1 < 0)
	{
		c++;
		n1 = -n1;
	}
	while (n1 >= 10)
	{
		n1 = n1 / 10;
		c++;
	}
	return (c);
}
