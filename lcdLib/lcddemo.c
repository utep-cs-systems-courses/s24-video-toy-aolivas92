/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

void drawBox(u_char acol, u_char arow, u_char size, u_int color) {
  u_char max_col = acol + size;
  u_char max_row = arow + size;
  for (u_char col = acol - size; col < max_col; col ++)
    for (u_char row = arow - size; row < max_row; row ++)
      drawPixel(col, row, color);
}

int main() {
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);
  drawString5x7(20, 20, "hello", COLOR_GREEN, COLOR_RED);

  drawBox(screenWidth/2, screenHeight/2, 15, COLOR_ORANGE);
}

/* /\** Initializes everything, clears the screen, draws "hello" and a square *\/ */
/* int */
/* main() */
/* { */
/*   configureClocks(); */
/*   lcd_init(); */
/*   u_char width = screenWidth, height = screenHeight; */

/*   clearScreen(COLOR_BLUE); */

/*   //fillRectangle(30, 30, 60, 40, COLOR_ORANGE); */
  
/*   //drawString5x7(45,45, "hello!", COLOR_GREEN, COLOR_RED); */

/*   short cc = screenWidth / 2; */
/*   short cr = screenHeight / 2; */

/*   short col = cc; */
/*   short row = cr; */
/*   short size = 20; */
  
/*   for (int i = 0; i < size; i++) { */
/*     int j = (i * 2) + 1; */
/*     fillRectangle(col - i, row - i, j, 1, COLOR_ORANGE); */
/*   } */


  
/*   /\* */
/*   int x = 0; */
/*   int y = 0; */
/*   int speed = 6; */
/*   for (short i = 0; i < screenWidth; i++) { */
/*     drawPixel(x, centerRow - y, COLOR_PINK); */
/*     //drawPixel(x, centerRow - speed, COLOR_GREEN); */
/*     x ++; */
/*     y +=speed; */
/*     speed -= 1; */
/*     if (y <= 0) */
/*       speed = -speed; */
/*   } */
/*   *\/ */


/*   // Draw XMEN */
  
/*   //short centerCol = screenWidth >> 1; */
/*   //short centerRow = screenHeight >> 1; */

/*   //for (short i = 0; i < 20; i++) { */
/*   //drawPixel(centerCol + i, centerRow - i, COLOR_PINK); */
/*   //drawPixel(centerCol + i, centerRow + i, COLOR_PINK); */
/*   //drawPixel(centerCol - i, centerRow + i, COLOR_PINK); */
/*   //drawPixel(centerCol - i, centerRow - i, COLOR_PINK); */
/*   //} */

/*   //drawString5x7(centerCol-5, centerRow+30, "XMEN", COLOR_PINK, COLOR_BLUE); */




/*   // Draw an X */
  
/*   //for (short i = 0; i < 120; i++) { */
/*     //drawPixel(i, i, COLOR_PINK); */
/*     //drawPixel(width - i, i, COLOR_GREEN); */
/*   //} */
/* } */
