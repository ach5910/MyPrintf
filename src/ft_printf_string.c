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

int			ft_printf_string(va_list *ap, t_fmt **args)
{
	char		*str;
	int			size;

	str = ft_strdup(va_arg(*ap, char*));
	if ((*args)->min_width)
		str[(*args)->min_width] = '\0';
	size = ft_strlen(str);
	while  ((*args)->width > size)
	{
		str = (*args)->left_just ? ft_strjoin(str, " ") : ft_strjoin(
				" ", str);
		size++;
	}
	ft_putstr(str);
	return (size);
}
