/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:21:34 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/15 16:59:20 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* #include <string.h>
#include <stdio.h>

int main(void)q
{
    char name[] = "213";
    printf("%d\n", ft_strlen(name));
    printf("%lu", strlen(name));
    return(0);
}  */