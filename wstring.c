/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 00:30:57 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/01 00:36:19 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	setlocale(LC_ALL, "");
	wchar_t *str = L"a¥Ωa¥";
	while (str)
	{
		printf("%zd zd\n", strlen((const char *)str));
		str += 4;
	}
	return(0);
}
