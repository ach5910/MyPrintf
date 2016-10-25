/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:09:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 13:36:59 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int size;
	printf("---Decimal Integer---");
	size = printf("%-+20d -+20+d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("% 20d <space>20d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("% 20d <space>20d\n", -12345);
	printf("Return size: %d\n", size);
	size = printf("%+20d +20d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%+20d +20d\n", -12345);
	printf("Return size: %d\n", size);
	size = printf("%020d 020d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%+.10d +.10d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%-5d -5d\n", 12345678);
	printf("Return size: %d\n", size);
	size = printf("%.5d .5d\n", 123456789);
	printf("Return size: %d\n", size);
	size = printf("%.10d .10d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%+.5d +.5d\n", 123456789);
	printf("Return size: %d\n", size);
	size = printf("% .10d  .10d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%-15.10d  -15.10d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%15.10d  15.10d\n", 12345);
	printf("Return size: %d\n", size);
//	printf("%-015.10d  -015.10d\n", 12345);
	size = printf("%015.10d  015.10d\n",  12345);
	printf("Return size: %d\n", size);
	size = printf("%-+15.10d  -+15.10d\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%+15.10d  +15.10d\n", 12345);
	printf("Return size: %d\n", size);
//	printf("%-+015.10d -+015.10d\n", 12345);
	size = printf("%+015.10d +015.10d\n", 12345);
	printf("Return size: %d\n", size);
//	prinft("%+.00010d +.00010d\n", 12345);


	printf("---Unsigned Int---\n");
	// size = printf("%-+20u -+20+u\n", 12345);
	// printf("Return size: %d\n", size);
	// size = printf("% 20u <space>20u\n", 12345);
	// printf("Return size: %d\n", size);
	// size = printf("%+20u +20u\n", 12345);
	// printf("Return size: %d\n", size);
	size = printf("%020u 020u\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%-20u -20u\n", 12345);
	printf("Return size: %d\n", size);
	// size = printf("%-020u -020u\n", 12345);
	// printf("Return size: %d\n", size);
	size = printf("%-.020u -.020u\n", 12345);
	printf("Return size: %d\n", size);
	// size = printf("%+.10u +.10u\n", 12345);
	// printf("Return size: %d\n", size);
	size = printf("%-5u -5u\n", 12345678);
	printf("Return size: %d\n", size);
	size = printf("%.5u .5u\n", 123456789);
	printf("Return size: %d\n", size);
	size = printf("%.10u .10u\n", 12345);
	printf("Return size: %d\n", size);
	// size = printf("%+.5u +.5u\n", 123456789);
	// printf("Return size: %d\n", size);
	// size = printf("% .10u  .10u\n", 12345);
	// printf("Return size: %d\n", size);
	size = printf("%-15.10u  -15.10u\n", 12345);
	printf("Return size: %d\n", size);
	size = printf("%15.10u  15.10u\n", 12345);
	printf("Return size: %d\n", size);
//	printf("%-015.10d  -015.10d\n", 12345);
	size = printf("%015.10u  015.10u\n",  12345);
	printf("Return size: %d\n", size);
// 	size = printf("%-+15.10u  -+15.10u\n", 12345);
// 	printf("Return size: %d\n", size);
// 	size = printf("%+15.10u  +15.10u\n", 12345);
// 	printf("Return size: %d\n", size);
// //	printf("%-+015.10d -+015.10d\n", 12345);
// 	size = printf("%+015.10u +015.10u\n", 12345);
// 	printf("Return size: %d\n", size);
//	prinft("%+.00010d +.00010d\n", 12345);
	return (0);
}
