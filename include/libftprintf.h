/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 09:22:06 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/24 22:18:48 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_fmt
{
	int			hash;
	int			left_just;
	int			pos_val;
	int			prepend_sp;
	int			prepend_zeros;
	int			width;
	int			min_width;
	int			length;
}				t_fmt;

int				ft_printf(const char *format, ...);
t_fmt			*new_format(void);
int				parse_format(va_list *ap, const char *fmt);
int				parse_args(va_list *ap, t_fmt **args, char **fmt);
int				parse_conv_spec(va_list *ap, t_fmt **args, char **fmt);
void			parse_flags(t_fmt **args, char **fmt);
void			parse_num(t_fmt **args, char **fmt, int is_width);
void			parse_length(t_fmt **args, char **fmt);
int				ft_printf_int(va_list *ap, t_fmt **args);
intmax_t		ft_get_int_length(va_list *ap, t_fmt **args);
int				get_number_length(int nbr);

#endif


