/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 08:26:39 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 08:26:46 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define RESET		   0
#define BOLD  		 1
#define DIM		     2
#define ITALIC     3
#define UNDERLINE  4
#define BLINK      5
#define REVERSE		 7
#define HIDDEN		 8

#define BLACK 		 0
#define RED		     1
#define GREEN		   2
#define YELLOW		 3
#define BLUE		   4
#define MAGENTA		 5
#define CYAN		   6
#define	WHITE		   7

void textcolor(int attr, int fg, int bg);
int main(void)
{
  textcolor(BOLD, RED, BLACK, 1, "BRIGHT, RED, BLACK");
  printf("\n");

  textcolor(DIM, BLUE, YELLOW, 1, "DIM, BLUE, YELLOW");
  printf("\n");

  textcolor(UNDERLINE, GREEN, MAGENTA, 1, "UNDERLINE, GREEN, MAGENTA");
  printf("\n");

  textcolor(ITALIC, CYAN, WHITE, 1, "ITALIC, CYAN, WHITE");
  printf("\n");

  textcolor(BLINK, BLACK, GREEN, 1, "BLINK, BLACK, GREEN");
  printf("\n");

  textcolor(REVERSE, WHITE, RED, 1,  "REVERSE, WHITE, RED");
  printf("\n");

  textcolor(HIDDEN, YELLOW, BLACK, 1, "HIDDEN, YELLOW, BLACK");
  printf("\n");
  return (0);
}

int ft_textcolor(int attr, int fg, int bg, int auto_reset, char *str)
{
  int size;

  size = printf("\x1B[%d;%d;%dm", attr, fg + 30, bg + 40);
  if (str && *str)
    size += printf("%s\n", str);
  if (auto_reset)
    size += printf("\x1B[%d;%d;%dm", RESET, WHITE + 30, BLACK + 40);
  return (size);
}
