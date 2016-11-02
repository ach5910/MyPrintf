/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_wchar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:49:46 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/31 13:49:47 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"
#include <wchar.h>

int	ft_printf_wchar(va_list *ap, t_fmt **args)
{
	int size;
	unsigned char *dest;
	wchar_t	ch;

	ch = (wchar_t)va_arg(*ap, wint_t);
	dest = ft_get_wc(ch);
	size = ft_strlen((const char *)dest);
	if ((*args)->left_just)
		ft_putstr((const char *)dest);
	while  ((*args)->width > size)
 	{
		ft_putchar(' ');
		size++;
	}
	if (!(*args)->left_just)
		ft_putstr((const char *)dest);
    ft_strdel((char **)&dest);
	return (size);
}