/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_conversion_specifier.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/19 04:27:20 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/19 05:32:35 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	init_funct_ptr(t_conv_spec *conv_funct)
{
	conv_funct['s'] = &ft_printf_string;
	conv_funct['S'] = &ft_printf_wstring;
	conv_funct['p'] = &ft_printf_ptr;
	conv_funct['d'] = &ft_printf_int;
	conv_funct['D'] = &ft_printf_int;
	conv_funct['i'] = &ft_printf_int;
	conv_funct['o'] = &ft_printf_oct;
	conv_funct['O'] = &ft_printf_oct;
	conv_funct['u'] = &ft_printf_uint;
	conv_funct['U'] = &ft_printf_uint;
	conv_funct['x'] = &ft_printf_hex;
	conv_funct['X'] = &ft_printf_hex;
	conv_funct['c'] = &ft_printf_char;
	conv_funct['C'] = &ft_printf_wchar;
	conv_funct['b'] = &ft_printf_binary;
	conv_funct['%'] = &ft_printf_mod;
	//conv_funct['T'] = &ft_print_color;
}


t_conv_spec	ft_get_conv_spec(char c)
{
	static t_conv_spec *conv_funct = NULL;

	if (conv_funct == NULL)
	{
		conv_funct = malloc(sizeof(*conv_funct) * 256);
		if (conv_funct != NULL)
			init_funct_ptr(conv_funct);
	}
	return (conv_funct[(int)c]);
}

size_t	ft_put_conv_spec(va_list *ap, t_fmt **args, char **fmt)
{
	t_conv_spec conv_spec;
	size_t size;
	char	pad;

	size = 0;
	if (parse_conv_spec(args, fmt))
	{
		conv_spec = ft_get_conv_spec(**fmt);
		size = conv_spec(ap, args);
	}
	else if (**fmt != '\0')
	{
			if ((*args)->left_just)
				ft_putchar(**fmt);
			pad = (*args)->prepend_zeros ? '0' : ' ';
			while ((size_t)(*args)->width > ++size)
				ft_putchar(pad);
			if (!(*args)->left_just)
				ft_putchar(**fmt);
	}
	return (size);
}
