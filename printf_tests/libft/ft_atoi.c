/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:14:55 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/15 16:31:46 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	sign = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	nb = nb * sign;
	return (nb);
}

/* #include <stdlib.h>
#include <stdio.h>
int main()
{
    char text[] = "life is good";
     char text2[] = "-+54";
     char text3[] = "-12louis3";
     char text4[] = " ++12louis3";
     char text5[] = "!!12louis3";

	printf("%s\n", "FT_atoi:");
    printf("%d\n", ft_atoi(text));
    printf("%d\n", ft_atoi(text2));
    printf("%d\n", ft_atoi(text3));
    printf("%d\n", ft_atoi(text4));
    printf("%d\n", ft_atoi(text5));
	printf("%s\n", "atoi:");
	printf("%d\n", atoi(text));
    printf("%d\n", atoi(text2));
    printf("%d\n", atoi(text3));
    printf("%d\n", atoi(text4));
    printf("%d\n", atoi(text5));
} */