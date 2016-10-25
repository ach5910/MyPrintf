/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 20:42:09 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 00:52:15 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	ft_printf("This is a number %+d\n, this is another number % d\nthis number has min width of 10 %.10d\nthis number has min width of 10 with prepending zeros %.010d\n...this is the last number %d\nEND", 42, 24, 46, 67, -16);
//	ft_printf("This is a number %d, this is another number %d..\nEND", 42, 24);
	return (0);
}
