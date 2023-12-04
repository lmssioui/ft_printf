/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:08:40 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/04 18:22:01 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hexa(unsigned int x)
{
	char	*hexa;
	char	res[100];
	int	i;
	int	c;

	i = 0;
	hexa = "0123456789abcdef";
	while (x >= 16)
	{
		res[i] = hexa[x % 16];
		x = x / 16;
		i++;
	}
	c = i + 1;
	res[i] = hexa[x];
	while (i >= 0)
	{
		ft_putchar(res[i]);
		i--;
	}
	return (c);
}
/*#include <stdio.h>
int main()
{
	int d = ft_print_hexa(14268);
	printf("--->%d\n",d);
	int d1 = printf("%x",14268);
	printf("--->%d\n", d1);

}*/
