/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:42:19 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/24 11:49:02 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(const char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
	{
		write(1, str, ft_strlen(str));
		return (ft_strlen(str));
	}
}
