 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 09:22:06 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 04:53:36 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libft.h"
# include "ft_colors.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>

# define LEN_MOD_H	1
# define LEN_MOD_HH	2
# define LEN_MOD_L	3
# define LEN_MOD_LL	4
# define LEN_MOD_J	5
# define LEN_MOD_Z	6
# define NULL_STR	"(null)"
# define MAX(a,b) \
   ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

// #define RESET		0
// #define BOLD		1
// #define DIM			2
// #define ITALIC		3
// #define UNDERLINE 	4
// #define BLINK		5
// #define REVERSE		7
// #define HIDDEN		8

// #define BLACK 		0
// #define RED		    1
// #define GREEN		2
// #define YELLOW		3
// #define BLUE		4
// #define MAGENTA		5
// #define CYAN		6
// #define	WHITE		7

typedef struct	s_fmt
{
	int			hash;
	int			has_percision;
	int			left_just;
	int			pos_val;
	int			prepend_sp;
	int			prepend_zeros;
	int			width;
	int			has_percision;
	int			min_width;
	int			length;
	int			is_upper;
}				t_fmt;

typedef size_t	(*t_conv_spec)(va_list*, t_fmt**);

t_conv_spec		ft_get_conv_spec(char ch);
size_t				ft_printf(const char *format, ...);
t_fmt			*new_format(void);
size_t			ft_put_conv_spec(va_list *ap, t_fmt **args, char **fmt);
size_t				parse_format(va_list *ap, const char *fmt);
size_t				parse_args(va_list *ap, t_fmt **args, char **fmt);
int				parse_conv_spec(t_fmt **args, char **fmt);
void			parse_flags(t_fmt **args, char **fmt);
void			parse_num(t_fmt **args, char **fmt, int is_width);
void			parse_length(t_fmt **args, char **fmt);
<<<<<<< HEAD
void			ft_prfx(char **nstr, char *prfx, int b, char pre, int left_just);
=======
char			*ft_get_justified_pad(int prep_zeros, int has_percision, int left_just, int ptr);
size_t 			ft_strpad(size_t width, char **nstr, char *pad, int left_just);
size_t			ft_putcharpad(size_t width, size_t size, char ch);
void			ft_prepend_prefix(char **nstr, char *prefix, int base, uintmax_t nbr);
>>>>>>> 7c3e2c876a42c734a865a8f265a6ea0e47b9b2c8
size_t				ft_printf_int(va_list *ap, t_fmt **args);
size_t				ft_printf_mod(va_list *ap, t_fmt **args);
size_t				ft_printf_uint(va_list *ap, t_fmt **args);
size_t				ft_printf_hex(va_list *ap, t_fmt **args);
size_t			ft_unassigned_percision(t_fmt **args, int base);
size_t			ft_printf_mod(va_list *ap, t_fmt **args);
size_t				ft_printf_oct(va_list *ap, t_fmt **args);
size_t				ft_printf_char(va_list *ap, t_fmt **args);
size_t				ft_printf_wchar(va_list *ap, t_fmt **args);
size_t				ft_printf_string(va_list *ap, t_fmt **args);
size_t				ft_printf_wstring(va_list *ap, t_fmt **args);
size_t				ft_put_wstr(t_fmt **args, wchar_t *src, int chcnt, size_t size);
size_t				ft_printf_ptr(va_list *ap, t_fmt **args);
size_t				ft_printf_binary(va_list *ap, t_fmt **args);
size_t			ft_print_conv(va_list *ap, t_fmt **args, char **fmt);
<<<<<<< HEAD
void			ft_just(t_fmt **args, char **nstr, char pre);
size_t				ft_putuint(t_fmt **args, char *prfx, uintmax_t n, int b);
=======
void			ft_justify(t_fmt **args, char **nstr, size_t offset);
size_t				ft_putuint(t_fmt **args, char *prefix, uintmax_t nbr, int base);
>>>>>>> 7c3e2c876a42c734a865a8f265a6ea0e47b9b2c8
unsigned char   *ft_get_wc(wchar_t c);
size_t				ft_get_bytes_wc(wchar_t c);
intmax_t		ft_get_int_length(va_list *ap, t_fmt **args);
uintmax_t		ft_get_uint_length(va_list *ap, t_fmt **args);
char			*ft_itoa_base(uintmax_t value, int base, int is_uppper);
uintmax_t		ft_pow(int base, int i);
// size_t				ft_print_color(va_list *ap, t_fmt **args);
// void			ft_setcolor(va_list *ap);

#endif
