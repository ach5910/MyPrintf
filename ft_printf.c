/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 09:35:14 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/19 05:29:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_prinft_int(va_list *ap, t_fmt **args)
{
	int perc;
	int nbr;
	int len;
	char *s;

	nbr = va_arg(*ap, int);
   	len = get_nbr_len(nbr);
	if (*args->min_width > len)
		ft_bzero()
		
}

void	parse_length(t_fmt **args, char **fmt)
{
	if (**fmt == 'h' && *(*fmt + 1) == 'h')
	{
	   *args->length = 1;
	   (*fmt) + 2;
	   return ;
	}
	else if (**fmt == 'l' && *(*fmt + 1) == 'l')
	{
		*args->length = 4;
		(*fmt) + 2;
		return ;
	}
	else if (**fmt == 'h' || **fmt == 'l' || **fmt 'j' || **fmt == j ||
		**fmt == 'z')
	{
		if (**fmt == 'h')
			*args->length = 2;
		if (**fmt == 'l')
			*args->length = 3;
		if (**fmt == 'j')
			*args->length = 5;
		else
			*args->length = 6;
		(*fmt)++;
	}	
}

void	parse_num(t_fmt **args, char **fmt, int width)
{
	 int nbr;

	 nbr = 0;
	 while (ft_is_alpha(**fmt))
	 {
		nbr *= 10 + (**fmt - '0');
		(*fmt)++;
	 }
	 if (width)
	 	*args->width = nbr;
	 else
		*args->min_width = nbr; 
}

void parse_flags(t_fmt **args, char **fmt)
{
	while (**fmt == '#' || **fmt == '0' || **fmt == '-' || **fmt == '+' ||
			**fmt == ' ')
	{
		if (**fmt == '#')
			*args->hash = 1;
		else if (**fmt == '-')
			*args->left_just = 1;
		else if (**fmt == '+')
			*args->pos_val = 1;
		else if (**fmt == ' ' )
			*args->prepend_sp = 1;
		else if (**fmt == '0')
			*args->prepend_zeros = 1;
		(*fmt)++;
	}
}

int	parse_args(t_fmt **args, char **fmt)
{
	int size;
	conv_spec conv_funct;
	size = 0;
	if (**fmt == '%')
	{
		ft_putchar("%");
		return (1);
	}
	parse_flags(args, fmt);
	parse_width(args, fmt, 1);
	if(*(*fmt)++  == '.')
		parse_width(args, fmt, 0);
	parse_length(args, fmt);
	conv_funct = get_conversion_specifier(**fmt);
	size = conv_funct(&ap, args);

}

int	parse_format(va_list ap, const char *fmt)
{
	int size;
	char *iter;
	char *cursor;
	t_fmt *args;

	size = 0;
	iter = (char *)fmt;
	cursor = (char *)fmt;
	while ((iter = ft_strchr(cursor, '%')))
	{
		*iter = '\0';
		size += ft_strlen(cursor);
		ft_putstr(cursor);
		size += parse_args(&args, &iter);
		cusor = iter;
	}
	if (*cursor != '\0')
	{
		size += ft_strlen(cursor);
		ft_putstr(cursor);
	}
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int size;
	va_list ap;

	va_start(ap, format);
	size = parse_format(ap, format);
	va_end(ap);

	return (size);
}
