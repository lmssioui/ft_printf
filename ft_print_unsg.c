/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 09:40:00 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/06 10:11:44 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsg(unsigned int n)
{
	int				count;

	count = 0;
	if (n < 10)
	{
		ft_putchar(n + '0');
		count++;
	}
	else
	{
		count = ft_print_unsg(n / 10);
		count += ft_putchar(n % 10 + '0');
	}
	return (count);
}
/*#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int d = ft_print_unsg(INT_MAX);
	printf("--->%d\n",d);
	int d1 = printf("%u",INT_MAX);
	printf("--->%d",d1);
}*/