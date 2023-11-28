/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:14:06 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/27 18:47:53 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *format, int i, va_list ap)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_printf_c(va_arg(ap, int));
	else if (format[i] == 's')
		count += ft_printf_s(va_arg(ap, const char *));
	// else if (format[i] == 'p')
		// count += ft_print_p(ap);
	// else if (format[i] == 'd' || format[i] == 'i')
	// 	count += ft_printf_id(va_arg(ap, int));
	// else if (format[i] == 'u')
	// 	count += ft_printf_u(va_arg(ap, char *));
	else if (format[i] == 'x' || format[i] == 'X')
		count += ft_printf_xx(va_arg(ap, int), *format);
// 	else if (format[i] == '%')
// 		count += ft_print_c(va_arg(ap, char));
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
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(ap);
	return (count);
}
