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

unsigned char* ft_get_wc(wchar_t c)
{
    static unsigned char b_static[5];
    unsigned char* b = b_static; 

    if (c<(1<<7))// 7 bit Unicode encoded as plain ascii
    {
        *b++ = (unsigned char)(c);
    }
    else if (c<(1<<11))// 11 bit Unicode encoded in 2 UTF-8 bytes
    {
        *b++ = (unsigned char)((c>>6)|0xC0);
        *b++ = (unsigned char)((c&0x3F)|0x80);
    }
    else if (c<(1<<16))// 16 bit Unicode encoded in 3 UTF-8 bytes
        {
        *b++ = (unsigned char)(((c>>12))|0xE0);
        *b++ =  (unsigned char)(((c>>6)&0x3F)|0x80);
        *b++ =  (unsigned char)((c&0x3F)|0x80);
    }

    else if (c<(1<<21))// 21 bit Unicode encoded in 4 UTF-8 bytes
    {
        *b++ = (unsigned char)(((c>>18))|0xF0);
        *b++ = (unsigned char)(((c>>12)&0x3F)|0x80);
        *b++ = (unsigned char)(((c>>6)&0x3F)|0x80);
        *b++ = (unsigned char)((c&0x3F)|0x80);
    }
    *b = '\0';
    return b_static;
}

int	ft_printf_wchar(va_list *ap, t_fmt **args)
{
	int size;
	unsigned char *dest;
	wchar_t	ch;

	(void)(*args);
	ch = (wchar_t)va_arg(*ap, wint_t);
	dest = ft_get_wc(ch);
	ft_putstr((const char *)dest);
	size = ft_strlen((const char *)dest);
	// while  ((*args)->width > size)
	// {
	// 	ft_putchar(' ');
	// 	size++;
	// }
	// if (!(*args)->left_just)
	// 	ft_putstr((const char *)dest);
	return (size);
}