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

void	ft_prepend_prefix(char **nstr, char *prefix, int base, uintmax_t nbr)
{
	if (prefix[0] != '\0' && base == 8 && prefix[0] != *nstr[0])
		*nstr = ft_strjoin(prefix, *nstr);
	else if (prefix[0] != '\0' && base == 16 && nbr != 0)
		*nstr = ft_strjoin(prefix, *nstr);
	else if (prefix[0] != '\0' && base != 8 && base != 16)
		*nstr = ft_strjoin(prefix, *nstr);
}

size_t	ft_justify(t_fmt **args, char **nstr)
{
	char	*prepend;
	size_t	size;

	prepend = ft_strnew(1);
	prepend[0] = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	size = ft_strlen(*nstr);
	while  ((size_t)(*args)->width > size)
	{
		*nstr = (*args)->left_just ? ft_strjoin(*nstr, prepend) : ft_strjoin(
			prepend, *nstr);
		size++;
	}
	ft_strdel(&prepend);
	return (size);
}

size_t		ft_putuint(t_fmt **args, char *prefix, uintmax_t nbr, int base)
{
	char	*nstr;
	size_t		size;

	nstr = ft_itoa_base((uintmax_t)nbr, base, (*args)->is_upper);
	while (*nstr == '0' && nstr[1] != '\0')
		nstr++;
	size = ft_strlen(nstr);
	while ((size_t)(*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	ft_prepend_prefix(&nstr, prefix, base, nbr);
	size = ft_justify(args, &nstr);
	ft_putstr(nstr);
	// if (nstr && *nstr)
	// 	ft_strdel(&nstr);
	return (size);
}
