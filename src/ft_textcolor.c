/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_textcolor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:08:38 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/01 19:08:41 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
# define COLOR_FMT "\033[0;30;40m"
# define RESET_FMT "\033[0;37;40m"

int ft_print_color(va_list *ap, t_fmt **args)
{
	int size;
	int auto_reset;

	ft_setcolor(ap);
	size = 10;
	auto_reset = va_arg(*ap, int);
	size += ft_printf_string(ap, args);
	if (auto_reset)
	{
		ft_printf("\033[%d;%d;%dm", RESET, WHITE + 30, BLACK + 40);
		size += 10;
	}
	return (size);
}
void ft_setcolor(va_list *ap)
{
  // char	*col_fmt;
  int attr;
  int	fg;
  int	bg;
  int size;

  // col_fmt = ft_strdup(COLOR_FMT);
  // col_fmt[4] = va_arg(*ap, int) + '0';
  // col_fmt[7] = va_arg(*ap, int) + '0';
  // col_fmt[10] = va_arg(*ap, int) + '0';
  attr = va_arg(*ap, int);
  fg = va_arg(*ap, int);
  bg = va_arg(*ap, int);
  // ft_putstr(col_fmt);
  // ft_strdel(&col_fmt);
  size = ft_printf("\033[%d;%d;%dm", attr, fg + 30, bg + 40);
}
