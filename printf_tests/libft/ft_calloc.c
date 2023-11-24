/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:45:55 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/22 17:15:50 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	if (size && (count > __SIZE_MAX__ / size))
		return (NULL);
	dst = malloc(count * size);
	if (dst == NULL)
		return (0);
	ft_bzero(dst, size * count);
	return (dst);
}
/* 
#include <stdio.h>
 int main()
 {
    char *text;
    text = ft_calloc(1, 2);
    for(int i = 0; i < sizeof(text); i++)
        printf("c", text[i]);
    printf("\n%s", text);
 } */