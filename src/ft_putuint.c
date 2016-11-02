/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:05:06 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:05:10 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	while (ft_pow(base, size) - 1 < value)
		size++;
	nbr = ft_strnew(size);
	while (size-- > 0)
	{
		nbr[size] = buf[value % base];
		value /= base;
	}
	ft_strdel(&buf);
	return (nbr);
}

int		ft_putuint(t_fmt **args, char *prefix, uintmax_t nbr, int base)
{
	char	*nstr;
	char	*prepend;
	int		size;

	prepend = ft_strnew(1);
	prepend[0] = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	nstr = ft_itoa_base((uintmax_t)nbr, base, (*args)->is_upper);
	while(*nstr == '0' && nstr[1] != '\0')
		nstr++;
	size = ft_strlen(nstr);
	while ((*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	if (prefix[0] != '\0' && base == 8 && prefix[0] != nstr[0])
		nstr = ft_strjoin(prefix, nstr);
	else if (prefix[0] != '\0' && base == 16 && nbr != 0)
		nstr = ft_strjoin(prefix, nstr);
	else if (prefix[0] != '\0' && base != 8 && base != 16)
		nstr = ft_strjoin(prefix, nstr);
	size = ft_strlen(nstr);
	while  ((*args)->width > size)
	{
		nstr = (*args)->left_just ? ft_strjoin(nstr, prepend) : ft_strjoin(
				prepend, nstr);
		size++;
	}
	ft_putstr(nstr);
	ft_strdel(&prepend);
	// if (nstr && *nstr)
	// 	ft_strdel(&nstr);
	return (size);
}
