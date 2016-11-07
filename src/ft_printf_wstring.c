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
	wchar_t *src;
	size_t		size;
	int		chcnt;
	char	ch;
	int		i;

	chcnt = 0;
	size = 0;
	if ((src = va_arg(*ap, wchar_t*)) == NULL)
	{
		ft_putstr(NULL_STR);
		return (6);
	}
	if ((*args)->has_percision && (*args)->min_width == 0)
	{
		// while((size_t)(*args)->width > size)
		// {
		// 	(*args)->prepend_zeros ? ft_putchar('0') : ft_putchar(' ');
		// 	size++;
		// }
		ch = (*args)->prepend_zeros ? '0' : ' ';
		return (ft_putcharpad((size_t)(*args)->width, size, ch));
	}
	(*args)->has_percision = (*args)->min_width ? 1 : 0;
	while ((i = ft_get_bytes_wc(src[chcnt])) != 0)
	{
		if ((*args)->has_percision && ((*args)->min_width -= i) < 0)
			break ;
		size += i;
		chcnt++;
	}
	size = ft_put_wstr(args, src, chcnt, size);
	//ft_memdel((void **)&src);
	return (size);
}

size_t	ft_put_wstr(t_fmt **args, wchar_t *src, int chcnt, size_t size)
{
	unsigned char *dest;
	int i;
	char 	pad;

	i = 0;
	pad = ((*args)->prepend_zeros && !(*args)->min_width) ? '0' : ' ';
	// while (!(*args)->left_just && (size_t)(*args)->width > size)
 // 	{
	// 	ft_putchar(prepend);
	// 	size++;
	// }
	if (!(*args)->left_just)
		size = ft_putcharpad((size_t)(*args)->width, size, pad);
	while (chcnt > i)
	{
		dest = ft_get_wc(src[i]);
		ft_putstr((const char *)dest);
		ft_strdel((char **)&dest);
		i++;
	}
	// while ((*args)->left_just && (size_t)(*args)->width > size)
 // 	{
	// 	ft_putchar(prepend);
	// 	size++;
	// }
	if ((*args)->left_just)
		size = ft_putcharpad((size_t)(*args)->width, size, pad);
	return (size);
}
