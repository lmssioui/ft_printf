#include "ft_printf.h"
#include <stdio.h>
int	main()
{
	int f = 59;
	void *p;
	int d = ft_printf("%d %s %i %u %p %x %",f, NULL,142,15,&p,145236);
	ft_printf("-->%d\n",d);
	int d1 = printf("%d %s %i %u %p %x %",f, NULL,142,15,&p,145236);
	printf("-->%d\n",d1);
	return 0;
}