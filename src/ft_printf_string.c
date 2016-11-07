/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:14:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:14:17 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t			ft_printf_string(va_list *ap, t_fmt **args)
{
	char		*str;
	char		*temp;
	size_t			size;
	char		*prepend;

	if ((*args)->length == LEN_MOD_L)
	{
		size = ft_printf_wstring(ap, args);
		return (size);
	}
	size = 0;
	if ((temp = va_arg(*ap, char*)) == NULL)
	{
		if ((*args)->width & (*args)->prepend_zeros)
		{
			// while ((size_t)(*args)->width > size)
			// {
			// 	ft_putchar('0');
			// 	size++;
			// }
			return (ft_putcharpad((size_t)(*args)->width, size, '0'));
		}
		ft_putstr(NULL_STR);
		return (6);
	}
	if ((*args)->has_percision && (*args)->min_width == 0)
	{
		// while ((size_t)(*args)->width > size)
		// {
		// 	ft_putchar(' ');
		// 	size++;
		// }
		return (ft_putcharpad((size_t)(*args)->width, size, ' '));
	}
	prepend = ft_strnew(1);
	prepend[0] = ((*args)->prepend_zeros && !(*args)->min_width) ? '0' : ' ';
	prepend[0] = (*args)->left_just ? ' ' : prepend[0];
	str = ft_strdup(temp);
	if ((*args)->min_width && (size_t)(*args)->min_width < ft_strlen(str))
		str[(*args)->min_width] = '\0';
	size = ft_strlen(str);
	// while  (ç > size)
	// {
	// 	str = (*args)->left_just ? ft_strapp(str, " ") : ft_strpre(
	// 			prepend, str);
	// 	size++;
	// }
	size = ft_strpad((size_t)(*args)->width, size, &str, prepend, (*args)->left_just);
	ft_putstr(str);
	ft_strdel(&prepend);
	ft_strdel(&str);
	return (size);
}
