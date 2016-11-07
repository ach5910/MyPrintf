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

<<<<<<< HEAD
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

void	ft_prfx(char **nstr, char *prfx, int b, char pre, int left_just)
{
	if (prfx[0] != '\0' && (left_just || !(left_just && pre != '0')))
	{
		if (b == 8 && prfx[0] != *nstr[0])
			*nstr = ft_strjoin(prfx, *nstr);
		else if (b != 8)
			*nstr = ft_strjoin(prfx, *nstr);
	}
	else if (prfx[0] != '\0')
	{
		if (b == 16)
			*nstr[1] = prfx[1];
		else
			*nstr[0] = prfx[0];
	}
}

void	ft_just(t_fmt **args, char **nstr, char pre)
{
=======
void	ft_prepend_prefix(char **nstr, char *prefix, int base, uintmax_t nbr)
{
	if (prefix[0] != '\0' && base == 8 && prefix[0] != *nstr[0])
		*nstr = ft_strpre(prefix, *nstr);
	else if (prefix[0] != '\0' && base == 16 && nbr != 0)
		*nstr = ft_strpre(prefix, *nstr);
	else if (prefix[0] != '\0' && base != 8 && base != 16)
		*nstr = ft_strpre(prefix, *nstr);
}

void	ft_justify(t_fmt **args, char **nstr, size_t offset)
{
	char	*pad;
>>>>>>> 7c3e2c876a42c734a865a8f265a6ea0e47b9b2c8
	size_t	size;
	char	*pad;

<<<<<<< HEAD
	if ((size_t)(*args)->width - ft_strlen(*nstr) > 0)
	{
		size = (size_t)(*args)->width - ft_strlen(*nstr);
		pad = ft_strnew(size);
		pad = (char *)ft_memset(pad, (int)pre, size);
		*nstr = (*args)->left_just ? ft_strjoin(*nstr, " ") : ft_strjoin(
			pad, *nstr);
		
	}
	ft_strdel(&pad);
}

size_t		ft_putuint(t_fmt **args, char *prfx, uintmax_t n, int b)
=======
	pad = ft_get_justified_pad((*args)->prepend_zeros, (*args)->has_percision, 
		(*args)->left_just, 0);
	size = ft_strpad((size_t)(*args)->width - offset, nstr, pad, (*args)->left_just);
	ft_strdel(&pad);
}

size_t		ft_unassigned_precision(t_fmt **args, int base)
{
	int i;

	if ((*args)->hash && base == 8)
	{
		ft_putchar('0');
		return(1);
	}
	i = 0;
	while (((*args)->width > i++))
		ft_putchar(' ');
	return ((*args)->width);
}


size_t		ft_putuint(t_fmt **args, char *prefix, uintmax_t nbr, int base)
>>>>>>> 7c3e2c876a42c734a865a8f265a6ea0e47b9b2c8
{
	char	*nstr;
	char	*temp;
	size_t		size;
	char pre;


<<<<<<< HEAD
	pre = ((*args)->prepend_zeros && !(*args)->pos_val &&
			!(*args)->min_width) ? '0' : ' ';
	nstr = ft_itoa_base((uintmax_t)n, b, (*args)->is_upper);
	while (*nstr == '0' && nstr[1] != '\0')
		nstr++;
	size = ft_strlen(nstr);
	while ((size_t)(*args)->min_width > size)
	{
		nstr = ft_strjoin("0", nstr);
		size++;
	}
	(*args)->left_just ? ft_prfx(&nstr, prfx, b, pre, 1) 
		: ft_just(args, &nstr, pre);
	!(*args)->left_just ? ft_prfx(&nstr, prfx, b, pre, 0) 
		: ft_just(args, &nstr, pre);
=======
	if ((*args)->has_percision && (*args)->min_width == 0 && nbr == 0)
		return (ft_unassigned_precision(args, base));
	nstr = ft_itoa_base((uintmax_t)nbr, base, (*args)->is_upper);
	temp = nstr;
	while (*temp == '0' && temp[1] != '\0')
		temp++;
	free(nstr);
	nstr = ft_strdup(temp);
	size = ft_strpad((size_t)(*args)->min_width, &nstr, "0", 0);
	if ((*args)->left_just || ((*args)->prepend_zeros && !(*args)->has_percision))
		ft_justify(args, &nstr, ft_strlen(prefix));
	ft_prepend_prefix(&nstr, prefix, base, nbr);
	if (!(*args)->left_just && (!(*args)->prepend_zeros || (*args)->has_percision))
		ft_justify(args, &nstr, 0);
>>>>>>> 7c3e2c876a42c734a865a8f265a6ea0e47b9b2c8
	size = ft_strlen(nstr);
	ft_putstr(nstr);
	ft_strdel(&nstr);
	return (size);
}
