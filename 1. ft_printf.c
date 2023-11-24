/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1. ft_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:14:06 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/24 19:20:41 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char *format, int i, va_list ap)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_printf_c(va_arg(ap, char));
	else if (format[i] == 's')
		count += ft_printf_s(va_arg(ap, char *));
	else if (format[i] == 'p')
		count += ft_print_p(ap);
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_print_id(va_arg(ap, int));
	else if (format[i] == 'u')
		count += ft_print_u(ap);
	else if (format[i] == 'x' || format[i] == 'X')
		count += ft_print_xX(ap);
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

int	main(void)
{
	const char	*age;

	age = "";
	printf ("%f", "He is %d years old.");
}

//va_list ap :: creates an empty variable-length argument list

// va_start(ap, fomat) :: intializes the va_list variable ap to point to the 
// first variable arguement using the argument that precedes the '...'

//after va_start, we can use va_arg to access individual arguments based on their types.
//va_arg allows to retrieve successive argument based in their types