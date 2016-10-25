/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:09:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/25 01:12:04 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	printf("%-+20d -+20+d\n", 12345);
	printf("% 20d <space>20d\n", 12345);
	printf("% 20d <space>20d\n", -12345);
	printf("%+20d +20d\n", 12345);
	printf("%+20d +20d\n", -12345);
	printf("%020d 020d\n", 12345);
	printf("%x x\n", 12345);
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
	printf("%.10s .10s\n", "Hello World");
	printf("%+.10d +.10d\n", 12345);
	printf("%-5d -5d\n", 12345678);
	printf("%.5d .5d\n", 123456789);
	printf("%.10d .10d\n", 12345);
	printf("%+.5d +.5d\n", 123456789);
	printf("% .10d + .10d\n", 12345);
	printf("%+.10d + +.10d\n", 12345);
//	prinft("%+.00010d +.00010d\n", 12345);
	return (0);
}
