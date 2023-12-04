/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:26:30 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/04 20:47:14 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_pointer(void *p)
{
	intptr_t c;
	const char *hex_digit;
	char 	res[20];
	int 	i;
	int	j;
	int	start;
	int	end;
	char	temp;

	hex_digit = "0123456789abcdef";
	i = 0;
	c = (intptr_t)p;
	while(c != 0)
	{
		res[i++] = hex_digit[c % 16];
		c /= 16;
	}
	res[i++] = 'x';
	res[i++] = '0';
	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = res[start];
		res[start] = res[end];
		res[end] = temp;
		start++;
		end--;
	}
	j = 0;
	while (j < i)
	{
		ft_putchar(res[j]);
		j++;
	}
	return (j);

}
#include <stdio.h>
int main()
{
	int a = 5;
	void *c = &a;
	int d = ft_print_pointer(c);
	printf("--->%d\n",d);
	int d2 = printf("%p",c);
	printf("--->%d\n",d2);
}
