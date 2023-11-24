/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:11:32 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/22 21:54:02 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = (char)c;
		i++;
		n--;
	}
	return (s);
}

/* #include <stdio.h> 
int main() 
{ 
    char str[] = "Life is good."; 
    ft_memset(str, '.', 8);
    printf("%s\n", str);
    memset(str, '.', 8);
    printf("%s", str);
    return 0;
} */