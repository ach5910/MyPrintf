/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 09:51:05 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/03 09:51:09 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_printf_mod(va_list *ap, t_fmt **args)
{
	size_t			size;

	(void)*ap;
	size = 1;
	if ((*args)->min_width == 0)
	{	
		ft_putchar('%');
		return (size);
	}
	if ((*args)->left_just)
		ft_putchar('%');
	ft_putnbr((*args)->width);
	while  ((size_t)(*args)->width > size)
	{
		ft_putchar(' ');
		size++;
	}
	if (!(*args)->left_just)
		ft_putchar('%');
	return (size);
}
