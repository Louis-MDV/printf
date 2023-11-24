/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:05:38 by lmerveil          #+#    #+#             */
/*   Updated: 2023/11/22 21:59:03 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*chrdst;
	char			*chrsrc;

	chrdst = (char *)dst;
	chrsrc = (char *)src;
	if (dst <= src)
	{
		ft_memcpy(dst, src, n);
		return (dst);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			chrdst[n - 1 - i] = chrsrc[n - 1 - i];
			i++;
		}
		return (chrdst);
	}
}

/* #include <string.h>
#include <stdio.h>

int main() 
{ 
char src[] = "bilob";
	char dst[] = "yesbo";

	char src2[] = "bilob";
	char dst2[] = "yesbo";


ft_memmove(dst,src, 3);
   	printf("%s\n", dst);

	memmove(dst2, src2, 3);
    printf("%s\n", dst2);
} */