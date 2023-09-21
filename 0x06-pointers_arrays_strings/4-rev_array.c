#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: elements
 */
void reverse_array(int *a, int n)
{
int tempp, index;
for (index = n - 1; index > n / 2; index--)
{
tempp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tempp;
}
}
