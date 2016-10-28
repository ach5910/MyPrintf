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

    size = ft_printf("%-+20hhd -+20+hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hhd <space>20hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hhd <space>20hhd\n", (char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hhd +20hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hhd +20hhd\n", (char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hhd 020hhd\n", (char)123);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%-+20hd -+20+hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hd <space>20hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20hd <space>20hd\n", (short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hd +20hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20hd +20hd\n", (short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hd 020hd\n", (short)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%-+20ld -+20+ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20ld <space>20ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20ld <space>20ld\n", (long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20ld +20ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20ld +20ld\n", (long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020ld 020ld\n", (long)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%-+20lld -+20+lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20lld <space>20lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20lld <space>20lld\n", (long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20lld +20lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20lld +20lld\n", (long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020lld 020lld\n", (long long)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%-+20jd -+20+jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20jd <space>20jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20jd <space>20jd\n", (intmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20jd +20jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20jd +20jd\n", (intmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020jd 020jd\n", (intmax_t)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%-+20zd -+20+zd\n", (signed)(size_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20zd <space>20zd\n", (signed)(size_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("% 20zd <space>20zd\n", (signed)(size_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20zd +20zd\n", (signed)(size_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%+20zd +20zd\n", (signed)(size_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020zd 020zd\n", (signed)(size_t)12345);
    ft_printf("Return size: %d\n", size);

    /*	printf("%x x\n", 12345);
     ft_printf("%X X\n", 12345);
     ft_printf("%#x #x\n", 12345);
     ft_printf("%#X #X\n", 12345);
     ft_printf("%o o\n", 12345);
     ft_printf("%O O\n", 12345);
     ft_printf("%#o #o\n", 12345);
     ft_printf("%#O #O\n", 12345);
     ft_printf("%-20s -20s\n", "Hello World");
     ft_printf("%-20.10s -20.10s\n", "Hello World");
     ft_printf("%20.10s 20.10s\n", "Hello World");
     ft_printf("%.10s .10s\n", "Hello World");*/
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
    // size = ft_printf("%-020u -020u\n", 12345);
    // ft_printf("Return size: %d\n", size);
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
//  ft_printf("%-015.10d  -015.10d\n", 12345);
    size = ft_printf("%015.10u  015.10u\n",  12345);
    ft_printf("Return size: %d\n", size);
//     size = ft_printf("%-+15.10u  -+15.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
//     size = ft_printf("%+15.10u  +15.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
// //  ft_printf("%-+015.10d -+015.10d\n", 12345);
//     size = ft_printf("%+015.10u +015.10u\n", 12345);
//     ft_printf("Return size: %d\n", size);
//  prinft("%+.00010d +.00010d\n", 12345);

    // size = ft_printf("%-+20hhu -+20+hhu\n", (unsigned char)123);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20hhu <space>20hhu\n", (unsigned char)123);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5hhu <space>20hhu\n", (unsigned char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hhu 20hhu\n", (unsigned char)123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hhu 20hhu\n", (unsigned char)-123);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hhu 020hhu\n", (unsigned char)123);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20hu -+20+hu\n", (unsigned short)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20hu <space>20hu\n", (unsigned short)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5hu 20.5hu\n", (unsigned short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hu 20hu\n", (unsigned short)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20hu 20hu\n", (unsigned short)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020hu 020hu\n", (unsigned short)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20lu -+20+lu\n", (unsigned long)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20lu <space>20lu\n", (unsigned long)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5lu 20.5lu\n", (unsigned long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20lu 20lu\n", (unsigned long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20lu 20lu\n", (unsigned long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020lu 020lu\n", (unsigned long)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20llu -+20+llu\n", (unsigned long long)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20llu <space>20llu\n", (unsigned long long)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%2.50llu 20.5llu\n", (unsigned long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20llu 20llu\n", (unsigned long long)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20llu 20llu\n", (unsigned long long)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020llu 020llu\n", (unsigned long long)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20ju -+20+ju\n", (uintmax_t)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20ju <space>20ju\n", (uintmax_t)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5ju 20.5ju\n", (uintmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20ju 20ju\n", (uintmax_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20ju 20ju\n", (uintmax_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020ju 020ju\n", (uintmax_t)12345);
    ft_printf("Return size: %d\n", size);

    // size = ft_printf("%-+20zu -+20+zu\n", (size_t)12345);
    // ft_printf("Return size: %d\n", size);
    // size = ft_printf("% 20zu <space>20zu\n", (size_t)12345);
    // ft_printf("Return size: %d\n", size);
    size = ft_printf("%20.5zu 20.5zu\n", (size_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20zu 20zu\n", (size_t)12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%20zu 20zu\n", (size_t)-12345);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%020zu 020zu\n", (size_t)12345);
    ft_printf("Return size: %d\n", size);

    size = ft_printf("%#x #x\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%#X #X\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%#o #o\n", 45);
    ft_printf("Return size: %d\n", size);
    size = ft_printf("%#O #O\n", 45);
    ft_printf("Return size: %d\n", size);

	return (0);
}
