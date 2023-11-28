/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:30:11 by lmerveil          #+#    #+#             */
/*   Updated: 2023/11/27 17:54:26 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	digitcount(int nb)
{
	int	numdigits;

	numdigits = 0;
	while (numdigits >= 0)
	{
		nb = nb / 10;
		numdigits++;
	}
	return (numdigits);
}

static int	ft_printf_id(int nb)
{
	if (nb == '\0')
		return (0);
	ft_putnbr_fd(nb, 1);
	return (digitcount(nb));
}
