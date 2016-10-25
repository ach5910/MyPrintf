/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 20:42:09 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/24 21:46:52 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
//	ft_printf("This is a number %+d\n, this is another number % d...this is the last number %d\nEND", 42, 24, -16);
	ft_printf("This is a number %d, this is another number %d..\nEND", 42, 24);
	return (0);
}
