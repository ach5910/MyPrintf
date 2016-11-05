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
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>

#define RESET		0
#define BOLD  		1
#define DIM			2
#define ITALIC		3
#define UNDERLINE	4
#define BLINK		5
#define REVERSE		7
#define HIDDEN		8

#define BLACK 		0
#define RED		   	1
#define GREEN		2
#define YELLOW		3
#define BLUE		4
#define MAGENTA		5
#define CYAN		6
#define	WHITE		7

int textcolor(int attr, int fg, int bg)
{
  int size;

  size = printf("\033[%d;%d;%dm", attr, fg + 30, bg + 40);
  return (size);
}

int main(void)
{
	int size;
    printf("---Decimal Integer \"d\"---\n");
/*  printf("This is a umber %+d\n, this is another number % d\nthis number has min width of 10 %.10d\nthis number has min width of 10 with + flag %+.10d\n...this is the last number %d\n 10 width left just, 5 per %-10.5d\n 10 width right just, 5 per %10.5d\n10 width, lf, 0 prep, 5per %010.5d\n10 w, rj, 0 prep, 5 per%-010.5d\nEND", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//	printf("This is a number %d, this is another number %d..\nEND", 42, 24);
    size = printf("%d d\n", 0);
    printf("Return size: %d\n", size);
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

    size = printf("%hhd hhd\n", (char)0);
    printf("Return size: %d\n", size);
    size = printf("%-+20hhd -+20+hhd\n", (char)123);
    printf("Return size: %d\n", size);
    size = printf("% 20hhd <space>20hhd\n", (char)123);
    printf("Return size: %d\n", size);
    size = printf("% 20hhd <space>20hhd\n", (char)-123);
    printf("Return size: %d\n", size);
    size = printf("%+20hhd +20hhd\n", (char)123);
    printf("Return size: %d\n", size);
    size = printf("%+20hhd +20hhd\n", (char)-123);
    printf("Return size: %d\n", size);
    size = printf("%020hhd 020hhd\n", (char)123);
    printf("Return size: %d\n", size);

    size = printf("%hd hd\n", (short)0);
    printf("Return size: %d\n", size);
    size = printf("%-+20hd -+20+hd\n", (short)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20hd <space>20hd\n", (short)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20hd <space>20hd\n", (short)-12345);
    printf("Return size: %d\n", size);
    size = printf("%+20hd +20hd\n", (short)12345);
    printf("Return size: %d\n", size);
    size = printf("%+20hd +20hd\n", (short)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020hd 020hd\n", (short)12345);
    printf("Return size: %d\n", size);

    size = printf("%ld ld\n", (long)0);
    printf("Return size: %d\n", size);
    size = printf("%-+20ld -+20+ld\n", (long)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20ld <space>20ld\n", (long)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20ld <space>20ld\n", (long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%+20ld +20ld\n", (long)12345);
    printf("Return size: %d\n", size);
    size = printf("%+20ld +20ld\n", (long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020ld 020ld\n", (long)12345);
    printf("Return size: %d\n", size);

    size = printf("%lld lld\n", (long long)0);
    printf("Return size: %d\n", size);
    size = printf("%-+20lld -+20+lld\n", (long long)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20lld <space>20lld\n", (long long)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20lld <space>20lld\n", (long long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%+20lld +20lld\n", (long long)12345);
    printf("Return size: %d\n", size);
    size = printf("%+20lld +20lld\n", (long long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020lld 020lld\n", (long long)12345);
    printf("Return size: %d\n", size);

    size = printf("%jd jd\n", (intmax_t)0);
    printf("Return size: %d\n", size);
    size = printf("%-+20jd -+20+jd\n", (intmax_t)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20jd <space>20jd\n", (intmax_t)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20jd <space>20jd\n", (intmax_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%+20jd +20jd\n", (intmax_t)12345);
    printf("Return size: %d\n", size);
    size = printf("%+20jd +20jd\n", (intmax_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020jd 020jd\n", (intmax_t)12345);
    printf("Return size: %d\n", size);

    size = printf("%zd zd\n", (ssize_t)0);
    printf("Return size: %d\n", size);
    size = printf("%-+20zd -+20+zd\n", (ssize_t)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20zd <space>20zd\n", (ssize_t)12345);
    printf("Return size: %d\n", size);
    size = printf("% 20zd <space>20zd\n", (ssize_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%+20zd +20zd\n", (ssize_t)12345);
    printf("Return size: %d\n", size);
    size = printf("%+20zd +20zd\n", (ssize_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020zd 020zd\n", (ssize_t)12345);
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

    printf("---Decimal Integer \"i\"---\n");
/*  printf("This is a umber %+i\n, this is another number % i\nthis number has min wiith of 10 %.10i\nthis number has min wiith of 10 with + flag %+.10i\n...this is the last number %i\n 10 wiith left just, 5 per %-10.5i\n 10 wiith right just, 5 per %10.5i\n10 wiith, lf, 0 prep, 5per %010.5i\n10 w, rj, 0 prep, 5 per%-010.5i\nENi", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//  printf("This is a number %i, this is another number %i..\nENi", 42, 24);
    size = printf("%-+20i -+20+i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("% 20i <space>20i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("% 20i <space>20i\n", -12345);
    printf("Return size: %i\n", size);
    size = printf("%+20i +20i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("%+20i +20i\n", -12345);
    printf("Return size: %i\n", size);
    size = printf("%020i 020i\n", 12345);
    printf("Return size: %i\n", size);

    size = printf("%-+20hhi -+20+hhi\n", (char)123);
    printf("Return size: %i\n", size);
    size = printf("% 20hhi <space>20hhi\n", (char)123);
    printf("Return size: %i\n", size);
    size = printf("% 20hhi <space>20hhi\n", (char)-123);
    printf("Return size: %i\n", size);
    size = printf("%+20hhi +20hhi\n", (char)123);
    printf("Return size: %i\n", size);
    size = printf("%+20hhi +20hhi\n", (char)-123);
    printf("Return size: %i\n", size);
    size = printf("%020hhi 020hhi\n", (char)123);
    printf("Return size: %i\n", size);

    size = printf("%-+20hi -+20+hi\n", (short)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20hi <space>20hi\n", (short)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20hi <space>20hi\n", (short)-12345);
    printf("Return size: %i\n", size);
    size = printf("%+20hi +20hi\n", (short)12345);
    printf("Return size: %i\n", size);
    size = printf("%+20hi +20hi\n", (short)-12345);
    printf("Return size: %i\n", size);
    size = printf("%020hi 020hi\n", (short)12345);
    printf("Return size: %i\n", size);

    size = printf("%-+20li -+20+li\n", (long)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20li <space>20li\n", (long)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20li <space>20li\n", (long)-12345);
    printf("Return size: %i\n", size);
    size = printf("%+20li +20li\n", (long)12345);
    printf("Return size: %i\n", size);
    size = printf("%+20li +20li\n", (long)-12345);
    printf("Return size: %i\n", size);
    size = printf("%020li 020li\n", (long)12345);
    printf("Return size: %i\n", size);

    size = printf("%-+20lli -+20+lli\n", (long long)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20lli <space>20lli\n", (long long)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20lli <space>20lli\n", (long long)-12345);
    printf("Return size: %i\n", size);
    size = printf("%+20lli +20lli\n", (long long)12345);
    printf("Return size: %i\n", size);
    size = printf("%+20lli +20lli\n", (long long)-12345);
    printf("Return size: %i\n", size);
    size = printf("%020lli 020lli\n", (long long)12345);
    printf("Return size: %i\n", size);

    size = printf("%-+20ji -+20+ji\n", (intmax_t)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20ji <space>20ji\n", (intmax_t)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20ji <space>20ji\n", (intmax_t)-12345);
    printf("Return size: %i\n", size);
    size = printf("%+20ji +20ji\n", (intmax_t)12345);
    printf("Return size: %i\n", size);
    size = printf("%+20ji +20ji\n", (intmax_t)-12345);
    printf("Return size: %i\n", size);
    size = printf("%020ji 020ji\n", (intmax_t)12345);
    printf("Return size: %i\n", size);

    size = printf("%-+20zi -+20+zi\n", (ssize_t)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20zi <space>20zi\n", (ssize_t)12345);
    printf("Return size: %i\n", size);
    size = printf("% 20zi <space>20zi\n", (ssize_t)-12345);
    printf("Return size: %i\n", size);
    size = printf("%+20zi +20zi\n", (ssize_t)12345);
    printf("Return size: %i\n", size);
    size = printf("%+20zi +20zi\n", (ssize_t)-12345);
    printf("Return size: %i\n", size);
    size = printf("%020zi 020zi\n", (ssize_t)12345);
    printf("Return size: %i\n", size);
    size = printf("%+.10i +.10i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("%-5i -5i\n", 12345678);
    printf("Return size: %i\n", size);
    size = printf("%.5i .5i\n", 123456789);
    printf("Return size: %i\n", size);
    size = printf("%.10i .10i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("%+.5i +.5i\n", 123456789);
    printf("Return size: %i\n", size);
    size = printf("% .10i  .10i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("%-15.10i  -15.10i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("%15.10i  15.10i\n", 12345);
    printf("Return size: %i\n", size);
    //  printf("%-015.10i  -015.10i\n", 12345);
    size = printf("%015.10i  015.10i\n",  12345);
    printf("Return size: %i\n", size);
    size = printf("%-+15.10i  -+15.10i\n", 12345);
    printf("Return size: %i\n", size);
    size = printf("%+15.10i  +15.10i\n", 12345);
    printf("Return size: %i\n", size);
    //  printf("%-+015.10i -+015.10i\n", 12345);
    size = printf("%+015.10i +015.10i\n", 12345);
    printf("Return size: %i\n", size);
    //  prinft("%+.00010i +.00010i\n", 12345);

    printf("---Unsigned Int---\n");
    // size = printf("%-+20u -+20+u\n", 12345);
    // printf("Return size: %d\n", size);
    // size = printf("% 20u <space>20u\n", 12345);
    // printf("Return size: %d\n", size);
    // size = printf("%+20u +20u\n", 12345);
    // printf("Return size: %d\n", size);
    size = printf("%u u\n", 0);
    printf("Return size: %d\n", size);
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
//  printf("%-015.10d  -015.10d\n", 12345);
    size = printf("%015.10u  015.10u\n",  12345);
    printf("Return size: %d\n", size);
//     size = printf("%-+15.10u  -+15.10u\n", 12345);
//     printf("Return size: %d\n", size);
//     size = printf("%+15.10u  +15.10u\n", 12345);
//     printf("Return size: %d\n", size);
// //  printf("%-+015.10d -+015.10d\n", 12345);
//     size = printf("%+015.10u +015.10u\n", 12345);
//     printf("Return size: %d\n", size);
//  prinft("%+.00010d +.00010d\n", 12345);

    // size = printf("%-+20hhu -+20+hhu\n", (unsigned char)123);
    // printf("Return size: %d\n", size);
    // size = printf("% 20hhu <space>20hhu\n", (unsigned char)123);
    // printf("Return size: %d\n", size);
    size = printf("%hhu hhu\n", (unsigned char)0);
    printf("Return size: %d\n", size);
    size = printf("%20.5hhu <space>20hhu\n", (unsigned char)-123);
    printf("Return size: %d\n", size);
    size = printf("%20hhu 20hhu\n", (unsigned char)123);
    printf("Return size: %d\n", size);
    size = printf("%20hhu 20hhu\n", (unsigned char)-123);
    printf("Return size: %d\n", size);
    size = printf("%020hhu 020hhu\n", (unsigned char)123);
    printf("Return size: %d\n", size);

    // size = printf("%-+20hu -+20+hu\n", (unsigned short)12345);
    // printf("Return size: %d\n", size);
    // size = printf("% 20hu <space>20hu\n", (unsigned short)12345);
    // printf("Return size: %d\n", size);
    size = printf("%hu hu\n", (unsigned short)0);
    printf("Return size: %d\n", size);
    size = printf("%20.5hu 20.5hu\n", (unsigned short)-12345);
    printf("Return size: %d\n", size);
    size = printf("%20hu 20hu\n", (unsigned short)12345);
    printf("Return size: %d\n", size);
    size = printf("%20hu 20hu\n", (unsigned short)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020hu 020hu\n", (unsigned short)12345);
    printf("Return size: %d\n", size);

    // size = printf("%-+20lu -+20+lu\n", (unsigned long)12345);
    // printf("Return size: %d\n", size);
    // size = printf("% 20lu <space>20lu\n", (unsigned long)12345);
    // printf("Return size: %d\n", size);
    size = printf("%lu lu\n", (unsigned long)0);
    printf("Return size: %d\n", size);
    size = printf("%20.5lu 20.5lu\n", (unsigned long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%20lu 20lu\n", (unsigned long)12345);
    printf("Return size: %d\n", size);
    size = printf("%20lu 20lu\n", (unsigned long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020lu 020lu\n", (unsigned long)12345);
    printf("Return size: %d\n", size);

    // size = printf("%-+20llu -+20+llu\n", (unsigned long long)12345);
    // printf("Return size: %d\n", size);
    // size = printf("% 20llu <space>20llu\n", (unsigned long long)12345);
    // printf("Return size: %d\n", size);
    size = printf("%llu llu\n", (unsigned long long)0);
    printf("Return size: %d\n", size);
    size = printf("%2.50llu 20.5llu\n", (unsigned long long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%20llu 20llu\n", (unsigned long long)12345);
    printf("Return size: %d\n", size);
    size = printf("%20llu 20llu\n", (unsigned long long)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020llu 020llu\n", (unsigned long long)12345);
    printf("Return size: %d\n", size);

    // size = printf("%-+20ju -+20+ju\n", (uintmax_t)12345);
    // printf("Return size: %d\n", size);
    // size = printf("% 20ju <space>20ju\n", (uintmax_t)12345);
    // printf("Return size: %d\n", size);
    size = printf("%ju ju\n", (uintmax_t)0);
    printf("Return size: %d\n", size);
    size = printf("%20.5ju 20.5ju\n", (uintmax_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%20ju 20ju\n", (uintmax_t)12345);
    printf("Return size: %d\n", size);
    size = printf("%20ju 20ju\n", (uintmax_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020ju 020ju\n", (uintmax_t)12345);
    printf("Return size: %d\n", size);

    // size = printf("%-+20zu -+20+zu\n", (size_t)12345);
    // printf("Return size: %d\n", size);
    // size = printf("% 20zu <space>20zu\n", (size_t)12345);
    // printf("Return size: %d\n", size);
    size = printf("%zu zu\n", (size_t)0);
    printf("Return size: %d\n", size);
    size = printf("%20.5zu 20.5zu\n", (size_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%20zu 20zu\n", (size_t)12345);
    printf("Return size: %d\n", size);
    size = printf("%20zu 20zu\n", (size_t)-12345);
    printf("Return size: %d\n", size);
    size = printf("%020zu 020zu\n", (size_t)12345);
    printf("Return size: %d\n", size);

	printf("---Hexadecimal--\n");
    size = printf("%#x #x\n", 0);
    printf("Return size: %d\n", size);
	size = printf("%#x #x\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#x #x\n", 128);
	printf("Return size: %d\n", size);
	size = printf("%#x #x\n", -45);
	printf("Return size: %d\n", size);
	size = printf("%#20x #20x\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20x #-20x\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#20.10x #20.10x\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20.10x #-20.10x\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#X #X\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#X #X\n", 128);
	printf("Return size: %d\n", size);
	size = printf("%#X #X\n", -45);
	printf("Return size: %d\n", size);
	size = printf("%#20X #20X\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20X #-20X\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#20.10X #20.10X\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20.10X #-20.10X\n", 45);

	printf("---Octal---\n");
    size = printf("%#o #o\n", 0);
    printf("Return size: %d\n", size);
	size = printf("%#o #o\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#o #o\n", 128);
	printf("Return size: %d\n", size);
	size = printf("%#o #o\n", -45);
	printf("Return size: %d\n", size);
	size = printf("%#20o #20o\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20o #-20o\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#20.10o #20.10o\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20.10o #-20.10o\n", 45);
	size = printf("%#O #O\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#O #O\n", 128);
	printf("Return size: %d\n", size);
	size = printf("%#O #O\n", -45);
	printf("Return size: %d\n", size);
	size = printf("%#20O #20O\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20O #-20O\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#20.10O #20.10O\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#-20.10O #-20.10O\n", 45);

	printf("---String---\n");
    size = printf("%s s\n", "");
    printf("Return size: %d\n", size);
	size = printf("%s s\n", "Hello World");
	printf("Return size: %d\n", size);
	size = printf("%.10s .10s\n", "Hello World");
	printf("Return size: %d\n", size);
	size = printf("%.15s .15s\n", "Hello World");
	printf("Return size: %d\n", size);
	size = printf("%20.10s 20.10s\n", "Hello World");
	printf("Return size: %d\n", size);
	size = printf("%20.15s 20.15s\n", "Hello World");
	printf("Return size: %d\n", size);
	size = printf("%-20.10s -20.10s\n", "Hello World");
	printf("Return size: %d\n", size);
	size = printf("%-20.15s -20.15s\n", "Hello World");
	printf("Return size: %d\n", size);

	printf("---Character---\n");
    size = printf("%c c\n", 0);
    printf("Return size: %d\n", size);
	size = printf("%c c\n", 'a');
	printf("Return size: %d\n", size);
	size = printf("%10c 10c\n", 'a');
	printf("Return size: %d\n", size);
	size = printf("%-10c -10c\n", 'a');
	printf("Return size: %d\n", size);
	size = printf("%20c 20c\n", 'a');
	printf("Return size: %d\n", size);
	size = printf("%-20c -20c\n", 'a');
	printf("Return size: %d\n", size);
	size = printf("%c c\n", 49);
	printf("Return size: %d\n", size);
	size = printf("%10c 10c\n", 49);
	printf("Return size: %d\n", size);
	size = printf("%-10c -10c\n", 49);
	printf("Return size: %d\n", size);
	size = printf("%20c 20c\n", 49);
	printf("Return size: %d\n", size);
	size = printf("%-20c -20c\n", 49);
	printf("Return size: %d\n", size);
	size = printf("%c c\n", 20);
	printf("Return size: %d\n", size);
	size = printf("%10c 10c\n", 20);
	printf("Return size: %d\n", size);
	size = printf("%-10c -10c\n", 20);
	printf("Return size: %d\n", size);
	size = printf("%20c 20c\n", 20);
	printf("Return size: %d\n", size);
	size = printf("%-20c -20c\n", 20);
	printf("Return size: %d\n", size);

	// size = printf("%c c\n", 0);
	// printf("Return size: %d\n", size);
	// size = printf("%10c 10c\n", 0);
	// printf("Return size: %d\n", size);
	// size = printf("%-10c -10c\n", 0);
	// printf("Return size: %d\n", size);
	// size = printf("%20c 20c\n", 0);
	// printf("Return size: %d\n", size);
	// size = printf("%-20c -20c\n", 0);
	// printf("Return size: %d\n", size);

	size = printf("%c c\n", 10);
	printf("Return size: %d\n", size);
	size = printf("%10c 10c\n", 10);
	printf("Return size: %d\n", size);
	size = printf("%-10c -10c\n", 10);
	printf("Return size: %d\n", size);
	size = printf("%20c 20c\n", 10);
	printf("Return size: %d\n", size);
	size = printf("%-20c -20c\n", 10);
	printf("Return size: %d\n", size);

    printf("---Wide Character---\n");
    setlocale(LC_ALL, "");
    wchar_t c = L'Ω';
    wchar_t d = L'a';
    wchar_t f = L'¥';
    wchar_t t = L'▓';

    size = printf("%lc lc\n", c);
    printf("Return size: %d\n", size);
    size = printf("%-20lc -20lc\n", d);
    printf("Return size: %d\n", size);
    size = printf("%lc lc\n", L'◴');
    printf("Return size: %d\n", size);
    size = printf("%C C\n", L'Ԙ');
    printf("Return size: %d\n", size);
    size = printf("%10C 10C\n", L'Ԅ');
    printf("Return size: %d\n", size);
    size = printf("%5C 5C\n", L'Њ');
    printf("Return size: %d\n", size);
    size = printf("%-10C -10C\n", L'Ѭ');
    printf("Return size: %d\n", size);
    size = printf("%-5C -5C\n", L'Ѽ');
    printf("Return size: %d\n", size);
    size = printf("%-20C -20C\n", L'Ӻ');
    printf("Return size: %d\n", size);
    size = printf("%5C 5C\n", L'ϰ');
    printf("Return size: %d\n", size);
    size = printf("%-10C -10C\n", L'✌');
    printf("Return size: %d\n", size);
    size = printf("%15C 15C\n", L'☫');
    printf("Return size: %d\n", size);
    size = printf("%-5C -5C\n", L'☬');
    printf("Return size: %d\n", size);
    size = printf("%-15C -15C\n", f);
    printf("Return size: %d\n", size);
    size = printf("%15C 15C\n", t);
    printf("Return size: %d\n", size);


    printf("---Wide String---\n");
    wchar_t *wstr = L"Ωa¥";
    wchar_t *wsrc = L"Приве́т नमस्ते שָׁלוֹם";
    wchar_t *wbuf = L"🐨 ☺ mЖuvoϟϿ_ԧ ☠ ✊ ∞";

    size = printf("%ls ls\n", wstr);
    printf("Return size: %d\n", size);
    size = printf("%S S\n", wsrc);
    printf("Return size: %d\n", size);
    size = printf("%S S\n", wbuf);
    printf("Return size: %d\n", size);

    size = printf("%ls ls\n", L"ϟϿनमसpop🐨");
    printf("Return size: %d\n", size);
    size = printf("%ls ls\n", L"Hello World");
    printf("Return size: %d\n", size);
    size = printf("%10ls 10ls\n", wstr);
    printf("Return size: %d\n", size);
    size = printf("%-10ls -10ls\n", L"☞☭☶☻♕♧♬");
    printf("Return size: %d\n", size);
    size = printf("%20.5ls 20.5ls\n", L"♨");
    printf("Return size: %d\n", size);
    size = printf("%-20.5ls -20.5ls\n", L"♲♾⚔⚗⚰⛄⛳");
    printf("Return size: %d\n", size);
    size = printf("%5.20ls 5.20ls\n", L"∰ _ ≝ ⊈⇟ iiℋ ");
    printf("Return size: %d\n", size);
    size = printf("%-5.20ls -5.20ls\n", L"Å ≖ ℌ ∐ ℕ ₮ ");
    printf("Return size: %d\n", size);
    size = printf("%-10.20ls -10.20ls\n", L"Å ≖ ℌ ∐ ℕ ₮ ");
    printf("Return size: %d\n", size);
    size = printf("%-.5ls -.5ls\n", L"∀§§ ↗𝔑↖ 𝒯ⅈ𝓉𝓉ΐξƧ  👅⩐  👉👌");
    printf("Return size: %d\n", size);
    size = printf("%-35ls -35ls\n", L"↖ ∀§§ ⅋ 𝒯 ⅈ𝓉𝓉ΐξƧ ↗ ⩐👅  👉👌");
    printf("Return size: %d\n", size);

	printf("---Pointer---\n");
	int buf[10] = {150, 255, 12, 16, 21, 42};
	int *tab = buf;
	char *str = "Hello World";
	int a = 10;

	size = printf("%p p\n", tab);
	printf("Return size: %d\n", size);
	size = printf("%p p\n", str);
	printf("Return size: %d\n", size);
	size = printf("%p p\n", &a);
	printf("Return size: %d\n", size);

    printf("---Percent Sign(edge case)---\n");
    size = printf("%% percent %% percent %%\n");
    printf("Return size: %d\n", size);

	printf("---Color(Bonus)---\n");
	size = textcolor(BOLD, RED, BLACK);
	size += printf("%s", "BOLD, RED, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(DIM, BLUE, YELLOW);
	size += printf("%s", "DIM, BLUE, YELLOW");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(UNDERLINE, GREEN, MAGENTA);
	size += printf("%s", "UNDERLINE, GREEN, MAGENTA");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(ITALIC, CYAN, WHITE);
	size += printf("%s", "ITALIC, CYAN, WHITE");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(BLINK, BLACK, GREEN);
	size += printf("%s", "BLINK, BLACK, GREEN");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(REVERSE, WHITE, RED);
	size += printf("%s", "REVERSE, WHITE, RED");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(HIDDEN, YELLOW, BLACK);
	size += printf("%s", "HIDDEN, YELLOW, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" T\nReturn size: %d\n", size + 3);

	size = textcolor(BOLD, RED, BLACK);
	size += printf("%20s", "BOLD, RED, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" 20T\nReturn size: %d\n", size + 5);

	size = textcolor(BOLD, RED, BLACK);
	size += printf("%-20s", "BOLD, RED, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" -20T\nReturn size: %d\n", size + 6);

	size = textcolor(BOLD, RED, BLACK);
	size += printf("%-20.10s", "BOLD, RED, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" -20.10T\nReturn size: %d\n", size + 9);

	size = textcolor(BOLD, RED, BLACK);
	size += printf("%20.10s", "BOLD, RED, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" 20.10T\nReturn size: %d\n", size + 8);

	size = textcolor(BOLD, RED, BLACK);
	size += printf("%.5s", "BOLD, RED, BLACK");
	size += textcolor(RESET, WHITE, BLACK);
	printf(" .5T\nReturn size: %d\n", size + 5);

    size = printf("%010x \n", 542);
    printf("Return size: %d\n", size);

    size = printf("@moulitest: %#.o %#.0o", 0, 0);
    printf("\nReturn size: %d\n", size);

    size = printf("@moulitest: %#.x %#.0x", 0, 0);
    printf("\nReturn size: %d\n", size);

    size = printf("@moulitest: 丽");
    printf("Return size: %d\n", size);

    size = printf("@moulitest: Ԙ");
    printf("Return size: %d\n", size);

    size = printf("%20.5ls", L"Ԙ");
    printf("Return size: %d\n", size);

    size = printf("%s", NULL);
    printf("\nReturn size: %d\n", size);

    size = printf("%ls", NULL);
    printf("\nReturn size: %d\n", size);


	return (0);
}
