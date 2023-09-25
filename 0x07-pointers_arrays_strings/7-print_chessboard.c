#include <stdio.h>
#include "main.h"
/**
 *  print_chessboard - prints chessboard
 *  @a: chessboard
 *  Return: void
 */
void print_chessboard(char (*a)[8])
{
int h, v;
for (h = 0; h < 8; h++)
{
for (v = 0; v < 8; v++)
{
putchar(a[v][h]);
}
putchar('\n');
}
}
