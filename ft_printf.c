/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:52:47 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/04 18:43:44 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list p;
	int count;

	if (format == NULL)
		return (-1);
	count = 0;
	va_start(p, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if(*format == 'c')
			{
				count += ft_putchar(va_arg(p, int));
			}
			else if (*format == 's')
			{
				count += ft_putstr(va_arg(p, const char *));
			}
			else if (*format == 'd' || *format == 'i')
				count += ft_putnbr(va_arg(p, int));
			else if (*format == 'x')
				count += ft_print_hexa(va_arg(p, unsigned int));
			else if (*format == 'X')
				count += ft_print_hexa1(va_arg(p, unsigned int));
			else if (*format == 'p')
				count += ft_print_pointer(va_arg(p, void *));
			else
			{
				count += ft_putchar(*format);
			}
		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(p);
	return (count);
}
#include<stdio.h>
#include<limits.h>
int main()
{
	int c= 15;
	int *p;
	p = &c;
	int d = ft_printf("%p",p);
	ft_printf("--->%d\n",d);
	int d1 = printf("%p",p);
	printf("--->%d\n",d1);
	return (0);
}
