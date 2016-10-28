/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 09:35:14 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 13:37:52 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <unistd.h>

uintmax_t	ft_pow(int  base, int i)
{
	if (i == 0)
		return (1);
	else
		return (base * ft_pow(base, i - 1));
}

char	*ft_itoa_base(uintmax_t value, int base, int is_upper)
{
	char *buf;
	int size;
	char *nbr;

	buf = is_upper ? ft_strdup("0123456789ABCDEF") :
		ft_strdup("0123456789abcdef");
	size = 1;
	// if (value < 0)
	// 	value *= -1;
	while (ft_pow(base, size) - 1 < value)
		size++;
	nbr = (char *)malloc(sizeof(char) * (size));
	nbr[size] = '\0';
	while (size-- > 0)
	{
		nbr[size] = buf[value % base];
		value /= base;
	}
	return (nbr);
}
int	get_number_length(int nbr)
{
	int cnt;

	cnt = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		cnt++;
	}
	return (cnt);
}

// void ft_printf_hexa(int	o, int r)
// {
// 	char buf[] = "0123456789abcdef";
//
// 	if (r > 1)
// 		ft_printf_hexa(o >> 4, r - 1);
// 	write(1, &buf[o % 16], 1);
// }
//
// void ft_printf_ptr(va_list *ap, t_fmt **args)
// {
// 	const unsigned char *adr;
// 	size_t	ptr_size;
// 	size_t 	i;
// 	size_t a;
//
// 	(void)args;
// 	adr = (unsigned const char *)va_arg(*ap, void*);
// 	ptr_size = sizeof(adr);
// 	i = 0;
// 	while (i < ptr_size)
// 	{
// 		a = 0;
// 		while (a < 16 && a + i < ptr_size)
// 		{
// 			ft_printf_hexa(*(adr + a + i), 2);
// 			a++;
// 		}
// 		i += 16;
// 	}
// }


int			ft_printf_char(va_list *ap, t_fmt **args)
{
	unsigned char		ch;
	int			size;

	size = 1;
	ch = (unsigned char)va_arg(*ap, int);
	if ((*args)->left_just)
		ft_putchar(ch);
	while  ((*args)->width > size)
	{
		ft_putchar(' ');
		size++;
	}
	if (!(*args)->left_just)
		ft_putchar(ch);
	return (size);
}

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
	/*if ((*args)->prepend_zeros)
		ft_putendl("Pad zerors");*/
	ft_putstr(str);
	return (size);
}

uintmax_t	ft_get_uint_length(va_list *ap, t_fmt **args)
{
	uintmax_t nbr;

	nbr = va_arg(*ap, uintmax_t);
	if ((*args)->length == 1)
		nbr = (unsigned char)nbr;
	else if ((*args)->length == 2)
		nbr = (unsigned short)nbr;
	else if ((*args)->length == 3)
		nbr = (unsigned long)nbr;
	else if ((*args)->length == 4)
		nbr = (unsigned long long)nbr;
	else if ((*args)->length == 5)
		nbr = (uintmax_t)nbr;
	else if ((*args)->length == 6)
		nbr = (size_t)nbr;
	else
		nbr = (unsigned int)nbr;
	return (nbr);
}

int			ft_printf_hex(va_list *ap, t_fmt **args)
{
	uintmax_t		nbr;
	char		*nstr;
	//int			nbrlen;
	char		*prefix;
	char		*prepend;
	int			size;

	//prefix = 0;
	nbr = ft_get_uint_length(ap, args);
	//nbrlen = get_number_length(nbr);
	prefix = ft_strnew(2);
	prepend = ft_strnew(1);
	if ((*args)->hash && (*args)->is_upper)
		prefix = "0X";
	else if ((*args)->hash && !(*args)->is_upper)
		prefix = "0x";
	else
		prefix[0] = '\0';
	// if ((*args)->pos_val)
	// 	prefix[0] = '+';
	// else if ((*args)->prepend_sp && !(*args)->prepend_zeros)
	// 	prefix[0] = ' ';
	// else
	// 	prefix[0] = '\0';
	/*if ((*args)->prepend_zeros && !(*args)->pos_val)
		prepend = '0';
	else
		prepend = ' ';*/
	prepend[0] = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	nstr = ft_itoa_base((uintmax_t)nbr,16, (*args)->is_upper);
	size = ft_strlen(nstr);
	while ((*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	if (prefix[0] != '\0')
		nstr = ft_strjoin(prefix, nstr);
	size = ft_strlen(nstr);
	while  ((*args)->width > size)
	{
		nstr = (*args)->left_just ? ft_strjoin(nstr, " ") : ft_strjoin(
				prepend, nstr);
		size++;
	}
	/*if ((*args)->prepend_zeros)
		ft_putendl("Pad zerors");*/
	ft_putstr(nstr);
	return (size);
}

int			ft_printf_oct(va_list *ap, t_fmt **args)
{
	uintmax_t		nbr;
	char		*nstr;
	//int			nbrlen;
	char		*prefix;
	char		*prepend;
	int			size;

	//prefix = 0;
	nbr = ft_get_uint_length(ap, args);
	//nbrlen = get_number_length(nbr);
	prefix = ft_strnew(1);
	prepend = ft_strnew(1);
	if ((*args)->hash)
		prefix[0] = '0';
	else
		prefix[0] = '\0';
	// if ((*args)->pos_val)
	// 	prefix[0] = '+';
	// else if ((*args)->prepend_sp && !(*args)->prepend_zeros)
	// 	prefix[0] = ' ';
	// else
	// 	prefix[0] = '\0';
	/*if ((*args)->prepend_zeros && !(*args)->pos_val)
		prepend = '0';
	else
		prepend = ' ';*/
	prepend[0] = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	nstr = ft_itoa_base((uintmax_t)nbr, 8, (*args)->is_upper);
	size = ft_strlen(nstr);
	while ((*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	if (prefix[0] != '\0' && prefix[0] != nstr[0])
		nstr = ft_strjoin(prefix, nstr);
	size = ft_strlen(nstr);
	while  ((*args)->width > size)
	{
		nstr = (*args)->left_just ? ft_strjoin(nstr, " ") : ft_strjoin(
				prepend, nstr);
		size++;
	}
	/*if ((*args)->prepend_zeros)
		ft_putendl("Pad zerors");*/
	ft_putstr(nstr);
	// ft_putendl("Size lving prinft:");
	// ft_putnbr(size);
	// ft_putchar('\n');
	return (size);
}

int ft_printf_ptr(va_list *ap, t_fmt **args)
{
	uintmax_t nbr;
	int	size;
	char *nstr;

	(*args)->length = 5;
	nbr = ft_get_uint_length(ap, args);
	nstr = ft_itoa_base(nbr, 16, (*args)->is_upper);
	nstr = ft_strjoin("Ox", nstr);
	size = ft_strlen(nstr);
	ft_putstr(nstr);
	return (size);
}

int			ft_printf_uint(va_list *ap, t_fmt **args)
{
	uintmax_t		nbr;
	char		*nstr;
	//int			nbrlen;
	char		*prefix;
	char		*prepend;
	int			size;

	//prefix = 0;
	nbr = ft_get_uint_length(ap, args);
	//nbrlen = get_number_length(nbr);
	prefix = ft_strnew(1);
	prepend = ft_strnew(1);
	prefix[0] = '\0';
	// if ((*args)->pos_val)
	// 	prefix[0] = '+';
	// else if ((*args)->prepend_sp && !(*args)->prepend_zeros)
	// 	prefix[0] = ' ';
	// else
	// 	prefix[0] = '\0';
	/*if ((*args)->prepend_zeros && !(*args)->pos_val)
		prepend = '0';
	else
		prepend = ' ';*/
	prepend[0] = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	nstr = ft_itoa_base((uintmax_t)nbr, 10, 0);
	size = ft_strlen(nstr);
	while ((*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	if (prefix[0] != '\0')
		nstr = ft_strjoin(prefix, nstr);
	size = ft_strlen(nstr);
	while  ((*args)->width > size)
	{
		nstr = (*args)->left_just ? ft_strjoin(nstr, " ") : ft_strjoin(
				prepend, nstr);
		size++;
	}
	/*if ((*args)->prepend_zeros)
		ft_putendl("Pad zerors");*/
	ft_putstr(nstr);
	return (size);
}

intmax_t	ft_get_int_length(va_list *ap, t_fmt **args)
{
	intmax_t nbr;

	nbr = va_arg(*ap, intmax_t);
	if ((*args)->length == 1)
		nbr = (char)nbr;
	else if ((*args)->length == 2)
		nbr = (short)nbr;
	else if ((*args)->length == 3)
		nbr = (long)nbr;
	else if ((*args)->length == 4)
		nbr = (long long)nbr;
	else if ((*args)->length == 5)
		nbr = (intmax_t)nbr;
	else if ((*args)->length == 6)
		nbr = (ssize_t)nbr;
	else
		nbr = (int)nbr;
	return(nbr);
}

int		ft_printf_dec_int(va_list *ap, t_fmt **args)
{
	intmax_t		nbr;
	char		*nstr;
	//int			nbrlen;
	char		*prefix;
	char		*prepend;
	int			size;

	//prefix = 0;
	nbr = ft_get_int_length(ap, args);
	//nbrlen = get_number_length(nbr);
	prefix = ft_strnew(1);
	prepend = ft_strnew(1);
	if (nbr < 0)
	{
		prefix[0] = '-';
		nbr *= -1;
	}
	else if ((*args)->pos_val)
		prefix[0] = '+';
	else if ((*args)->prepend_sp && !(*args)->prepend_zeros)
		prefix[0] = ' ';
	else
		prefix[0] = '\0';
	/*if ((*args)->prepend_zeros && !(*args)->pos_val)
		prepend = '0';
	else
		prepend = ' ';*/
	prepend[0] = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	nstr = ft_itoa_base((uintmax_t)nbr, 10, 0);
	size = ft_strlen(nstr);
	while ((*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	if (prefix[0] != '\0')
		nstr = ft_strjoin(prefix, nstr);
	size = ft_strlen(nstr);
	while  ((*args)->width > size)
	{
		nstr = (*args)->left_just ? ft_strjoin(nstr, " ") : ft_strjoin(
				prepend, nstr);
		size++;
	}
	/*if ((*args)->prepend_zeros)
		ft_putendl("Pad zerors");*/
	ft_putstr(nstr);
	return (size);
}

void	parse_length(t_fmt **args, char **fmt)
{
	if (**fmt == 'h' && *(*fmt + 1) == 'h')
	{
	  (*args)->length = 1;
	  (*fmt) +=  2;
	  return ;
	}
	else if (**fmt == 'l' && *(*fmt + 1) == 'l')
	{
		(*args)->length = 4;
		(*fmt) +=  2;
		return ;
	}
	else if (**fmt == 'h' || **fmt == 'l' || **fmt == 'j' || **fmt == 'z')
	{
		if (**fmt == 'h')
			(*args)->length = 2;
		if (**fmt == 'l')
			(*args)->length = 3;
		if (**fmt == 'j')
			(*args)->length = 5;
		else
			(*args)->length = 6;
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

int	parse_conv_spec(va_list *ap, t_fmt **args, char **fmt)
{
	int size = 0;
	if (**fmt == 'S' || **fmt == 'O' || **fmt == 'D' || **fmt == 'U' ||
			**fmt == 'C')
	{
		(*args)->length = 3;
	}
	if (**fmt == 'O' || **fmt == 'X')
		(*args)->is_upper = 1;
	if (**fmt == 'x' || **fmt == 'X')
		size += ft_printf_hex(ap, args);
	else if (**fmt == 'd' || **fmt == 'i')
		size += ft_printf_dec_int(ap, args);
	else if (**fmt == 'o' || **fmt == 'O')
		size += ft_printf_oct(ap, args);
	else if (**fmt == 'u' || **fmt == 'U')
		size += ft_printf_uint(ap, args);
	else if (**fmt == 's')
		size += ft_printf_string(ap, args);
	else if (**fmt == 'c')
		size += ft_printf_char(ap, args);
	else if (**fmt == 'p')
		size += ft_printf_ptr(ap, args);
	//	ft_printf_unsigned_int(ap, args, fmt);
//	else
	//	ft_print_null();

	return (size);
}

int	parse_args(va_list *ap,t_fmt **args, char **fmt)
{
	int size;
//	conv_spec conv_funct;
	size = 0;

	(*fmt)++;
	if (**fmt == '%')
	{
		ft_putchar('%');
		return (1);
	}
	parse_flags(args, fmt);
	parse_num(args, fmt, 1);
	if(**fmt  == '.')
		parse_num(args, fmt, 0);
	parse_length(args, fmt);
	size = parse_conv_spec(ap, args, fmt);
//	conv_funct = get_conversion_specifier(**fmt);
//	size = conv_funct(&ap, args);
	return (size);

}

t_fmt	*new_format(void)
{
	t_fmt *temp;

	temp = (t_fmt *)ft_memalloc(sizeof(t_fmt));
	temp->hash = 0;
	temp->left_just = 0;
	temp->pos_val = 0;
	temp->prepend_sp = 0;
	temp->prepend_zeros = 0;
	temp->width = 0;
	temp->min_width = 0;
	temp->length = 0;
	temp->is_upper = 0;
	return (temp);
}
int	parse_format(va_list *ap, const char *fmt)
{
	int size;
	char *iter;
	char *cursor;
	t_fmt *args;

	size = 0;
//	iter = (char *)fmt;
	cursor = ft_strdup(fmt);
	while ((iter = ft_strchr(cursor, '%')) != NULL)
	{
		*iter = '\0';
		size += ft_strlen(cursor);
		// ft_putendl("size first");
		// ft_putnbr(size);
		// ft_putchar('\n');
		ft_putstr(cursor);
		args = new_format();
		size += parse_args(ap, &args, &iter);
		ft_memdel((void **)&args);
		cursor = iter + 1;
	}
	if (*cursor != '\0')
	{
		// ft_putnbr(ft_strlen(cursor));
		// ft_putchar('\n');
		size += ft_strlen(cursor);
		// ft_putendl("Size after reading rest of string");
		// ft_putnbr(size);
		// ft_putchar('\n');
		ft_putstr(cursor);
	}
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int size;
	va_list ap;

	va_start(ap, format);
	size = parse_format(&ap, format);
	va_end(ap);


	return (size);
}
