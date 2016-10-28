/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:12:59 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:13:10 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_printf_hex(va_list *ap, t_fmt **args)
{
	uintmax_t		nbr;
	char		*prefix;
	int			size;

	nbr = ft_get_uint_length(ap, args);
	prefix = ft_strnew(2);
	if ((*args)->hash && (*args)->is_upper)
		prefix = "0X";
	else if ((*args)->hash && !(*args)->is_upper)
		prefix = "0x";
	else
		prefix[0] = '\0';
	size = ft_putuint(args, prefix, nbr, 16);
	return (size);
}
