#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int h;
for (h = 0; h < n; h++)
{
if (h == 0)
printf("%d", a[h]);
else
printf(", %d", a[h]);
}
printf("\n");
}
