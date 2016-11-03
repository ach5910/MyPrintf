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

size_t ft_print_color(va_list *ap, t_fmt **args)
{
	size_t size;

	ft_setcolor(ap);
	size = 10;
	size += ft_printf_string(ap, args);
	ft_printf("\033[%d;%d;%dm", RESET, WHITE + 30, BLACK + 40);
	size += 10;
	return (size);
}

void ft_setcolor(va_list *ap)
{
  int attr;
  int	fg;
  int	bg;

  attr = va_arg(*ap, int);
  fg = va_arg(*ap, int);
  bg = va_arg(*ap, int);
  ft_printf("\033[%d;%d;%dm", attr, fg + 30, bg + 40);
}
