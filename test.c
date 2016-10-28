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
#include <stdlib.h>

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

	size = printf("%-+20zd -+20+zd\n", (signed)(size_t)12345);
	printf("Return size: %d\n", size);
	size = printf("% 20zd <space>20zd\n", (signed)(size_t)12345);
	printf("Return size: %d\n", size);
	size = printf("% 20zd <space>20zd\n", (signed)(size_t)-12345);
	printf("Return size: %d\n", size);
	size = printf("%+20zd +20zd\n", (signed)(size_t)12345);
	printf("Return size: %d\n", size);
	size = printf("%+20zd +20zd\n", (signed)(size_t)-12345);
	printf("Return size: %d\n", size);
	size = printf("%020zd 020zd\n", (signed)(size_t)12345);
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

	// size = printf("%-+20hhu -+20+hhu\n", (unsigned char)123);
	// printf("Return size: %d\n", size);
	// size = printf("% 20hhu <space>20hhu\n", (unsigned char)123);
	// printf("Return size: %d\n", size);
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
	size = printf("%20.5zu 20.5zu\n", (size_t)-12345);
	printf("Return size: %d\n", size);
	size = printf("%20zu 20zu\n", (size_t)12345);
	printf("Return size: %d\n", size);
	size = printf("%20zu 20zu\n", (size_t)-12345);
	printf("Return size: %d\n", size);
	size = printf("%020zu 020zu\n", (size_t)12345);
	printf("Return size: %d\n", size);

	size = printf("%#x #x\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#X #X\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#o #o\n", 45);
	printf("Return size: %d\n", size);
	size = printf("%#O #O\n", 45);
	printf("Return size: %d\n", size);
	return (0);
}
