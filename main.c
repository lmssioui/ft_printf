#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int f = 59;
	void *p;
	int d = ft_printf("%d %s %i %u %p %x %%%%%%%%%%%%%%%%%d/#",f, NULL,142,15,&p,145236,atoi("654"));
	ft_printf("-->%d\n",d);
	int d1 = printf("%d %s %i %u %p %x %%%%%%%%%%%%%%%%%d/#",f, NULL,142,15,&p,145236,atoi("654"));
	printf("-->%d\n",d1);
	return 0;
}
