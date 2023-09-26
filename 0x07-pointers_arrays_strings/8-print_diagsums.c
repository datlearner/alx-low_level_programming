#include <stdio.h>
#include "main.h"
/**
 * print_diagsums -  two diagonals of a square
 * Return: matrix
 */
void print_diagsums(int *a, int size)
{
int a, sum = 0, sum2 = 0;
for (q = 0; q < size; q++)
{
sum += a[q];
a += size;
}
a -= size;
for (q = 0; q < size; q++)
{
sum2 += a[q];
a -= size;
}
printf("%d, %d\n", sum, sum2);
}
