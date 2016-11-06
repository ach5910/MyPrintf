/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 03:59:47 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 03:59:54 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	parse_length(t_fmt **args, char **fmt)
{
	if (**fmt == 'h' && *(*fmt + 1) == 'h')
	{
	  (*args)->length = LEN_MOD_HH;
	  (*fmt) +=  2;
	  return ;
	}
	else if (**fmt == 'l' && *(*fmt + 1) == 'l')
	{
		(*args)->length = LEN_MOD_LL;
		(*fmt) +=  2;
		return ;
	}
	while (**fmt == 'h' || **fmt == 'l' || **fmt == 'j' || **fmt == 'z')
	{
		if (**fmt == 'h')
			if ((*args)->length == LEN_MOD_H)
		else if (**fmt == 'l')
			(*args)->length = LEN_MOD_L;
		else if (**fmt == 'j')
			(*args)->length = LEN_MOD_J;
		else if (**fmt == 'z')
			(*args)->length = LEN_MOD_Z;
		(*fmt)++;
	}
}

void	parse_num(t_fmt **args, char **fmt, int is_width)
{
	 int nbr;

	 nbr = 0;
	 if (!is_width)
		 (*fmt)++;
	 if (**fmt == '0')
	 {
		 (*args)->prepend_zeros = 1;
		 (*fmt)++;
	 }
	 while (ft_isdigit(**fmt))
	 {
			nbr *= 10;
	   	nbr	+=  (**fmt - '0');
			(*fmt)++;
	 }
	 if (is_width)
	 	(*args)->width = nbr;
	 else
		(*args)->min_width = nbr;
}

void parse_flags(t_fmt **args, char **fmt)
{
	while (**fmt == '#' || **fmt == '0' || **fmt == '-' || **fmt == '+' ||
			**fmt == ' ')
	{
		if (**fmt == '#')
			(*args)->hash = 1;
		else if (**fmt == '-')
			(*args)->left_just = 1;
		else if (**fmt == '+')
			(*args)->pos_val = 1;
		else if (**fmt == ' ' )
			(*args)->prepend_sp = 1;
		else if (**fmt == '0')
			(*args)->prepend_zeros = 1;
		(*fmt)++;
	}
}

size_t	parse_conv_spec(va_list *ap, t_fmt **args, char **fmt)
{
	size_t size = 0;
	if (**fmt == 'S' || **fmt == 'O' || **fmt == 'D' || **fmt == 'U' ||
			**fmt == 'C')
	{
		(*args)->length = LEN_MOD_L;
	}
	if (**fmt == 'O' || **fmt == 'X')
		(*args)->is_upper = 1;
	size = ft_print_conv(ap, args, fmt);
	return (size);
}

size_t	ft_print_conv(va_list *ap, t_fmt **args, char **fmt)
{
	size_t size;

	size = 0;
	if (**fmt == 'x' || **fmt == 'X')
		size = ft_printf_hex(ap, args);
	else if (**fmt == 'd' || **fmt == 'i' || **fmt == 'D')
		size = ft_printf_int(ap, args);
	else if (**fmt == 'o' || **fmt == 'O')
		size = ft_printf_oct(ap, args);
	else if (**fmt == 'u' || **fmt == 'U')
		size = ft_printf_uint(ap, args);
	else if (**fmt == 's' || **fmt == 'S')
		size = ft_printf_string(ap, args);
	else if (**fmt == 'c' || **fmt == 'C')
		size = ft_printf_char(ap, args);
	else if (**fmt == 'p')
		size = ft_printf_ptr(ap, args);
	else if (**fmt == 'b')
		size = ft_printf_binary(ap, args);
	else if (**fmt == '%')
		size = ft_printf_mod(ap, args);
	else if (**fmt == 'T')
	{
		size = ft_print_color(ap, args);
		(*fmt) += 8;
	}
	return (size);
}

size_t	parse_args(va_list *ap,t_fmt **args, char **fmt)
{
	size_t size;

	size = 0;
	if (++(*fmt) == '\0')
		return (size);
	parse_flags(args, fmt);
	parse_num(args, fmt, 1);
	if(**fmt  == '.')
	{
		(*args)->has_percision = 1;
		parse_num(args, fmt, 0);
	}
	parse_length(args, fmt);
	parse_flags(args, fmt);
	size = parse_conv_spec(ap, args, fmt);
	if (size == 0 && **fmt != '\0')
	{
		if ((ft_strchr("xXdDioOuUsScCpbT%", **fmt)) == NULL)
		{
			if ((*args)->left_just)
				ft_putchar(**fmt);
			while ((size_t)(*args)->width > ++size)
				(*args)->prepend_zeros ? ft_putchar('0') : ft_putchar(' ');
			if (!(*args)->left_just)
				ft_putchar(**fmt);
		}
	}
	return (size);
}
