#include <stdio.h>
#include "main.h"
/**
 *  print_chessboard - prints chessboard
 *  @a: chessboard
 *  Return: void
 */
void print_chessboard(char (*a)[8])
{
int one, two;
for (one = 0; a[one][7]; one++)
{
for (two = 0; two < 8; two++)
putchar(a[one][two]);
putchar('\n');
}
}
