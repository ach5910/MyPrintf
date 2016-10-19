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



static void	init_funct_ptr(conv_spec *conv_funct)
{
	conv_funct['s'] = &ft_printf_str;
	conv_funct['S'] = &ft_printf_wsrtr;
	conv_funct['p'] = &ft_printf_ptr;
	conv_funct['d'] = &ft_printf_int;
	conv_funct['D'] = &ft_printf_long;
	conv_funct['i'] = &ft_printf_int;
	conv_funct['o'] = &ft_printf_oct;
	conv_funct['O'] = &ft_printf_oct;
	conv_funct['u'] = &ft_printf_unsigned_int;
	conv_funct['U'] = &ft_printf_unsigned_long;
	conv_funct['x'] = &ft_printf_hex;
	conv_funct['X'] = &ft_printf_hex;
	conv_funct['c'] = &ft_printf_char;
	conv_funct['C'] = &ft_printf_wchar;
}


conv_spec	get_conversion_specifier(char c)
{
	static conv_spec *conv_funct = NULL;

	if (conv_funct == NULL)
	{
		conv_funct = ft_malloc(sizeof(*conv_funct) * 256);
		if (conv_funct != NULL)
			init_funct_ptr(conv_funct);
	}
	return (conv_funct[(int)c]);
}
