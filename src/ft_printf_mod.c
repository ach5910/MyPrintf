/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 03:19:28 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/04 03:19:32 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printf_mod(va_list *ap, t_fmt **args)
{
	size_t size;

	size = 1;
	if (1 == 2)
		va_arg(*ap, int);
	if ((*args)->left_just)
		ft_putchar('%');
	while  ((size_t)(*args)->width > size)
	{
		ft_putchar(' ');
		size++;
	}
	if (!(*args)->left_just)
		ft_putchar('%');
	return (size);
}
