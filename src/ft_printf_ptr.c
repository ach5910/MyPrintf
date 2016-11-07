/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:11:14 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:11:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t ft_printf_ptr(va_list *ap, t_fmt **args)
{
	uintmax_t nbr;
	size_t	size;
	char *nstr;
	char	*prepend;

	(*args)->length = LEN_MOD_J;
	prepend = ft_strnew(1);
	prepend[0] = ((*args)->prepend_zeros && !(*args)->min_width) ? '0' : ' ';
	(*args)->left_just = (*args)->prepend_zeros ? 1 : (*args)->left_just;
	nbr = ft_get_uint_length(ap, args);
	nstr = ft_strdup(ft_itoa_base(nbr, 16, (*args)->is_upper));
	size = ft_strlen(nstr);
	if ((*args)->has_percision && (*args)->min_width == 0)
	{
		ft_putstr("0x");
		return(2);
	}
	while ((size_t)(*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	nstr = ft_strjoin("0x", nstr);
	size += 2;
	while ((size_t)(*args)->width > size)
	{
		nstr = (*args)->left_just ? ft_strjoin(nstr, prepend) : ft_strjoin( " ", nstr);
		size++;
	}
	ft_putstr(nstr);
	ft_strdel(&nstr);
	return (size);
}
