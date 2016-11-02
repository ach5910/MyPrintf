/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_wstring.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 20:19:03 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/31 20:19:06 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <wchar.h>

size_t	ft_printf_wstring(va_list *ap, t_fmt **args)
{
	unsigned char	*dest;
	wchar_t *src;
	size_t		size;
	int		chcnt;
	int		i;
	int		has_percision;

	src = va_arg(*ap, wchar_t*);
	chcnt = 0;
	i = 0;
	size = 0;
	has_percision = 0;
	if ((*args)->min_width)
		has_percision = 1;
	while ((i = ft_get_bytes_wc(src[chcnt])) != 0)
	{
		if (has_percision && ((*args)->min_width -= i) < 0)
			break ;
		size += i;
		chcnt++;
	}
	i = 0;
	while ((*args)->left_just && chcnt > i)
	{
		dest = ft_get_wc(src[i]);
		ft_putstr((const char *)dest);
		ft_strdel((char **)&dest);
		i++;
	}
	while  ((size_t)(*args)->width > size)
 	{
		ft_putchar(' ');
		size++;
	}
	i = 0;
	while (!(*args)->left_just && chcnt > i)
	{
		dest = ft_get_wc(src[i]);
		ft_putstr((const char *)dest);
		ft_strdel((char **)&dest);
		i++;
	}
	//ft_memdel((void **)&src);
	return (size);
}
