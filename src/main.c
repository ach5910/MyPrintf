/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 20:42:09 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 13:43:56 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int main(void)
{
	int size;
    ft_printf("---Decimal Integer---");
/*  ft_printf("This is a umber %+d\n, this is another number % d\nthis number has min width of 10 %.10d\nthis number has min width of 10 with + flag %+.10d\n...this is the last number %d\n 10 width left just, 5 per %-10.5d\n 10 width right just, 5 per %10.5d\n10 width, lf, 0 prep, 5per %010.5d\n10 w, rj, 0 prep, 5 per%-010.5d\nEND", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//	ft_printf("This is a number %d, this is another number %d..\nEND", 42, 24);
    size = ft_printf("%-+20d -+20+d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20d <space>20d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20d <space>20d\n", -12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20d +20d\n", 12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20d +20d\n", -12345);
	ft_printf("Return size: %d\n", size);
    size = ft_printf("%020d 020d\n", 12345);
	ft_printf("Return size: %d\n", size);

    /*	printf("%x x\n", 12345);
     printf("%X X\n", 12345);
     printf("%#x #x\n", 12345);
     printf("%#X #X\n", 12345);
     printf("%o o\n", 12345);
     printf("%O O\n", 12345);
     printf("%#o #o\n", 12345);
     printf("%#O #O\n", 12345);
     printf("%-20s -20s\n", "Hello World");
     printf("%-20.10s -20.10s\n", "Hello World");
     printf("%20.10s 20.10s\n", "Hello World");
     printf("%.10s .10s\n", "Hello World");*/
    size = ft_printf("%+.10d +.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5d -5d\n", 12345678);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.5d .5d\n", 123456789);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.10d .10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+.5d +.5d\n", 123456789);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% .10d  .10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-15.10d  -15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%15.10d  15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    //	printf("%-015.10d  -015.10d\n", 12345);
    size = ft_printf("%015.10d  015.10d\n",  12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-+15.10d  -+15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+15.10d  +15.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    //	printf("%-+015.10d -+015.10d\n", 12345);
    size = ft_printf("%+015.10d +015.10d\n", 12345);
    ft_printf("Return size: %d\n", size);
    //	prinft("%+.00010d +.00010d\n", 12345);

    ft_printf("---Unsigned Int---\n");
    // size = ft_printf("%-+20u -+20+u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20u <space>20u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("%+20u +20u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%020u 020u\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%-20u -20u\n", 12345);
    ft_printf("Return size: %d\n", size);
    // size = printf("%-020u -020u\n", 12345);
    // printf("Return size: %d\n", size);
    size = ft_printf("%-.020u -.020u\n", 12345);
    ft_printf("Return size: %d\n", size);
    // size = ft_printf("%+.10u +.10u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%-5u -5u\n", 12345678);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.5u .5u\n", 123456789);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%.10u .10u\n", 12345);
    ft_printf("Return size: %d\n", size);
    // size = ft_printf("%+.5u +.5u\n", 123456789);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% .10u  .10u\n", 12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%-15.10u  -15.10u\n", 12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%15.10u  15.10u\n", 12345);
    ft_printf("Return size: %d\n", size);
//  printf("%-015.10d  -015.10d\n", 12345);
    size = ft_printf("%015.10u  015.10u\n",  12345);
    ft_printf("Return size: %d\n", size);
//     size = ft_printf("%-+15.10u  -+15.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
//     size = ft_printf("%+15.10u  +15.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
// //  printf("%-+015.10d -+015.10d\n", 12345);
//     size = ft_printf("%+015.10u +015.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
//  prinft("%+.00010d +.00010d\n", 12345);

	return (0);
}
