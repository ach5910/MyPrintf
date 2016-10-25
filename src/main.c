/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 20:42:09 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 05:31:53 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
int main(void)
{
/*  ft_printf("This is a umber %+d\n, this is another number % d\nthis number has min width of 10 %.10d\nthis number has min width of 10 with + flag %+.10d\n...this is the last number %d\n 10 width left just, 5 per %-10.5d\n 10 width right just, 5 per %10.5d\n10 width, lf, 0 prep, 5per %010.5d\n10 w, rj, 0 prep, 5 per%-010.5d\nEND", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//	ft_printf("This is a number %d, this is another number %d..\nEND", 42, 24);
    ft_printf("%-+20d -+20+d\n", 12345);
    ft_printf("% 20d <space>20d\n", 12345);
    ft_printf("% 20d <space>20d\n", -12345);
    ft_printf("%+20d +20d\n", 12345);
    ft_printf("%+20d +20d\n", -12345);
    ft_printf("%020d 020d\n", 12345);
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
    ft_printf("%+.10d +.10d\n", 12345);
    ft_printf("%-5d -5d\n", 12345678);
    ft_printf("%.5d .5d\n", 123456789);
    ft_printf("%.10d .10d\n", 12345);
    ft_printf("%+.5d +.5d\n", 123456789);
    ft_printf("% .10d  .10d\n", 12345);
    ft_printf("%-15.10d  -15.10d\n", 12345);
    ft_printf("%15.10d  15.10d\n", 12345);
    //	printf("%-015.10d  -015.10d\n", 12345);
    ft_printf("%015.10d  015.10d\n",  12345);
    ft_printf("%-+15.10d  -+15.10d\n", 12345);
    ft_printf("%+15.10d  +15.10d\n", 12345);
    //	printf("%-+015.10d -+015.10d\n", 12345);
    ft_printf("%+015.10d +015.10d\n", 12345);
    //	prinft("%+.00010d +.00010d\n", 12345);

	return (0);
}
