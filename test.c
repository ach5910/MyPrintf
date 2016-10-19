/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/18 16:09:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/19 05:24:50 by ahunt            ###   ########.fr       */
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
	printf("%-5.10d -5.10d\n", 12345);
	return (0);
}
