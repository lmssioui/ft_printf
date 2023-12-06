/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouyata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:52:47 by abouyata          #+#    #+#             */
/*   Updated: 2023/12/06 11:19:30 by abouyata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	p;
	int		count;

	count = 0;
	va_start(p, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
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
			{
				count += ft_putstr("0x");
				count += ft_print_pointer((unsigned long)va_arg(p, void *));
			}
			else if (*format == 'u')
				count += ft_print_unsg(va_arg(p, unsigned int));
			else
				count += ft_putchar(*format);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(p);
	return (count);
}
// int main()
// {
// 	int d = ft_printf(" NULL %s NULL ", NULL);
// 	ft_printf("--->%d\n",d);
// 	//int d1 = printf(" NULL %s NULL ", NULL);;
// 	//printf("--->%d\n",d1);
// 	return (0);
// }
