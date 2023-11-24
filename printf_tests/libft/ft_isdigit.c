/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:42:10 by lmerveil          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:06 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
		result = 1;
	return (result);
}

/* #include <stdio.h>
#include <ctype.h>
int	main()
{
	int	emptystr = ' ';
	int	lowerstr= 'c';
	int	upperstr = 'L';
	int	numberstr = '1';

	printf("emptystr: %d\n", ft_isdigit(emptystr));
	printf("lowerstr: %d\n", ft_isdigit(lowerstr));
	printf("upperstr: %d\n", ft_isdigit(upperstr));
	printf("numberstr: %d\n", ft_isdigit(numberstr));

	printf("emptystr: %d\n", isdigit(emptystr));
	printf("lowerstr: %d\n", isdigit(lowerstr));
	printf("upperstr: %d\n", isdigit(upperstr));
	printf("numberstr: %d\n", isdigit(numberstr));
} */