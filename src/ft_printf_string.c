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
	size_t			size;

	if ((*args)->length == LEN_MOD_L)
		size = ft_printf_wstring(ap, args);
	else
	{
		str = ft_strdup(va_arg(*ap, char*));
		if ((*args)->min_width && (size_t)(*args)->min_width < ft_strlen(str))
			str[(*args)->min_width] = '\0';
		size = ft_strlen(str);
		while  ((size_t)(*args)->width > size)
		{
			str = (*args)->left_just ? ft_strjoin(str, " ") : ft_strjoin(
					" ", str);
			size++;
		}
		ft_putstr(str);
		ft_strdel(&str);
	}
	return (size);
}
