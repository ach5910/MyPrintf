/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:06:28 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:06:30 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
