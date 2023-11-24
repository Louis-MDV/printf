/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmerveil <lmerveil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:07:52 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/22 16:28:50 by lmerveil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		f(index, &(s[index]));
		index++;
	}
}
