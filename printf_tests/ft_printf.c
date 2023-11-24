/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:14:06 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/24 12:02:37 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *format, int i, va_list ap)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		return (1);
	}
	else if (format[i] == 's')
		count += ft_printf_s(va_arg(ap, char *));
	else if (format[i] == 'p')
		count += ft_print_p(ap);
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_print_d(ap);
	else if (format[i] == 'i')
		count += ft_print_i(ap);
	else if (format[i] == 'u')
		count += ft_print_u(ap);
	else if (format[i] == 'x')
		count += ft_print_x(ap);
	else if (format[i] == 'X')
		count += ft_print_x_maj(ap);
	else if (format[i] == '%')
		count += ft_print_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	count = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_parse(format, i, ap);
		}
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
