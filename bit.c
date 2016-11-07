/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:04:56 by ahunt             #+#    #+#             */
/*   Updated: 2016/11/07 09:05:08 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#define SET_BIT(val, bitIndex) val |= (1 << bitIndex)
#define CLEAR_BIT(val, bitIndex) val &= ~(1 << bitIndex)
#define TOGGLE_BIT(val, bitIndex) val ^= (1 << bitIndex)
#define BIT_IS_SET(val, bitIndex) (val & (1 << bitIndex))
int main(void)
{
	unsigned int hash = 0;
	unsigned int perc = 1;
	unsigned int left = 2;
	unsigned int pos = 3;
	unsigned int space = 4;
	unsigned int zeros = 5;
	unsigned int is_upper = 6;

	unsigned int flag = 0;

	// flag = flag | left;
	// flag = flag | pos;
	// flag = flag | zeros;
	// flag = flag | hash;

	SET_BIT(flag, perc);
	SET_BIT(flag, left);
	SET_BIT(flag, pos);

	if (BIT_IS_SET(flag, pos))
		printf("Pos Flag\n");
	if (BIT_IS_SET(flag, left))
		printf("Left Flag\n");
	if (BIT_IS_SET(flag, is_upper))
		printf("Is upper\n");
	CLEAR_BIT(flag, pos);
	if (BIT_IS_SET(flag, pos))
		printf("Pos Flag\n");
	if (!BIT_IS_SET(flag, pos))
		printf("Pos Flag unset\n");

	int i = ft_str_index("oxftlgds", 'x');
	printf("Index of x%d\n", i );

	i = ft_str_index("oxftlgds", 'd');
	printf("Index of d%d\n", i );

	i = ft_str_index("oxftlgds", 'q');
	printf("Index of q%d\n", i );
	return (0);
}
