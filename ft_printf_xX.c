/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:15:44 by lmerveil          #+#    #+#             */
/*   Updated: 2023/11/24 19:20:43 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_xX(int  )

void	ft_putnbr_fd(int n, int fd)
{
	char		digit;
	int long	nb2;

	digit = 0;
	nb2 = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb2 = -nb2;
	}
	if (nb2 >= 0 && nb2 <= 9)
	{
		digit = (nb2 + '0');
		write(fd, &digit, 1);
	}
	else
	{
		ft_putnbr_fd((nb2 / 10), fd);
		ft_putnbr_fd((nb2 % 10), fd);
	}
}