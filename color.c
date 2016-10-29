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
  textcolor(BOLD, RED, BLACK);
  printf("BRIGHT, RED, BLACK");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");

  textcolor(DIM, BLUE, YELLOW);
  printf("DIM, BLUE, YELLOW");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");

  textcolor(UNDERLINE, GREEN, MAGENTA);
  printf("UNDERLINE, GREEN, MAGENTA");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");

  textcolor(ITALIC, CYAN, WHITE);
  printf("ITALIC, CYAN, WHITE");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");

  textcolor(BLINK, BLACK, GREEN);
  printf("BLINK, BLACK, GREEN");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");

  textcolor(REVERSE, WHITE, RED);
  printf("REVERSE, WHITE, RED");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");

  textcolor(HIDDEN, YELLOW, BLACK);
  printf("HIDDEN, YELLOW, BLACK");
  textcolor(RESET, WHITE, BLACK);
  printf("\n");
  return (0);
}

void textcolor(int attr, int fg, int bg)
{
  char  command[13];

  //sprintf(command, "%c[%d;%d;%dm", 0x1B, attr, fg + 30, bg + 40);
  sprintf(command, "\033[%d;%d;%dm", attr, fg + 30, bg + 40);
  printf("%s", command);
}
