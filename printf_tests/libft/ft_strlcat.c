/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:05:00 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/22 22:10:30 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	count;

	if (!dst && dstsize == 0)
		return (0);
	dstlen = ft_strlen (dst);
	srclen = ft_strlen (src);
	count = 0;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (count < dstsize - dstlen - 1 && src[count])
	{
		dst[dstlen + count] = src[count];
		count++;
	}
	dst[dstlen + count] = '\0';
	return (dstlen + srclen);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
    char src[] = " mdv";
    char dst[] = "louis";
    int numdigits = 0;
    printf("%s\n", dst);
    //printf("%lu\n", strlcat(src, dst, numdigits));

    printf("%u\n", ft_strlcat(dst, src, numdigits));
} */