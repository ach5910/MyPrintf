/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:09:43 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:09:45 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_printf_uint(va_list *ap, t_fmt **args)
{
	uintmax_t		nbr;
	char		*prefix;
	int			size;

	nbr = ft_get_uint_length(ap, args);
	prefix = ft_strnew(1);
	prefix[0] = '\0';
	size = ft_putuint(args, prefix, nbr, 10);
	return (size);
}
