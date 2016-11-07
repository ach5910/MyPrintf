/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 03:58:29 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/07 03:58:33 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

size_t	ft_putcharpad(size_t width, size_t size, char ch)
{
	while(width > size)
	{
		ft_putchar(ch);
		size++;
	}
	return (size);
}

size_t ft_strpad(size_t width, size_t size,char **nstr, char *pad, int left_just)
{
	if (left_just)
	{
		while (width > size)
		{
			*nstr = ft_strapp(*nstr, pad);
			size++;
		}
	}
	else
	{
		while (width > size)
		{
			*nstr = ft_strpre(pad, *nstr);
			size++;
		}
	}
	return (size);
}

char	*ft_get_justified_pad(int prep_zeros, int has_percision, int left_just, int ptr)
{
	char	*pad;

	pad = ft_strnew(1);
	pad[0] = (prep_zeros && !has_percision) ? '0' : ' ';
	if (ptr)
		pad[0] = left_just ? pad[0] : ' ';
	else
		pad[0] = left_just ? ' ' : pad[0];
	return (pad);
}

