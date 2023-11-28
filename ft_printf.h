/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louismdv <louismdv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:19:09 by louismdv          #+#    #+#             */
/*   Updated: 2023/11/27 18:46:53 by louismdv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./include/libft/libft.h"

int			ft_printf(const char *format, ...);
int			ft_printf_s(const char *str);
int			ft_printf_c(const char c);
int			ft_printf_xx(int n, const char format);

#endif
