/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:30:11 by lmerveil          #+#    #+#             */
/*   Updated: 2023/11/24 19:15:20 by lmerveil         ###   ########.fr       */
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
	if (nb == NULL)
		return (0);
	ft_putnbr_fd(nb, 1);
	return (digitcount(nb));
}
