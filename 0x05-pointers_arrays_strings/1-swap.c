#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a:first int
 * @b: second int
 * Return: swaps
 */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}
