/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <ahunt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 02:31:43 by ahunt             #+#    #+#             */
/*   Updated: 2017/06/18 02:34:00 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"
#include "ft_colors.h"

int main(void)
{
	int size;
    printf("---Decimal Integer \"d\"---\n");
/*  printf("This is a umber %+d\n, this is another number % d\nthis number has min width of 10 %.10d\nthis number has min width of 10 with + flag %+.10d\n...this is the last number %d\n 10 width left just, 5 per %-10.5d\n 10 width right just, 5 per %10.5d\n10 width, lf, 0 prep, 5per %010.5d\n10 w, rj, 0 prep, 5 per%-010.5d\nEND", 42, 24, 46, 67, -16, 35, 35, 35, 35);*/
//  printf("This is a number %d, this is another number %d..\nEND", 42, 24);
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
    size = printf("{% 03d}", 0);
    printf("\nReturn size: %d\n", size);
    size = printf("{% 05d}", 42);
    printf("\nReturn size: %d\n", size);

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
    //  printf("%-015.10d  -015.10d\n", 12345);
    size = printf("%015.10d  015.10d\n",  12345);
    printf("Return size: %d\n", size);
    size = printf("%-+15.10d  -+15.10d\n", 12345);
    printf("Return size: %d\n", size);
    size = printf("%+15.10d  +15.10d\n", 12345);
    printf("Return size: %d\n", size);
    //  printf("%-+015.10d -+015.10d\n", 12345);
    size = printf("%+015.10d +015.10d\n", 12345);
    printf("Return size: %d\n", size);
    //  prinft("%+.00010d +.00010d\n", 12345);

    printf("\n\n\n---Decimal Integer \"i\"---\n");
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

    printf("\n\n\n---Unsigned Int---\n");
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
}