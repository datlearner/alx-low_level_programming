#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - square root of Number
 * @n: does not have a natural number
 * Return: -1
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 && n == 1)
{
return (n);
}
else
{
int a = 1;
int x = n;
int z = -1;
while (a <= x)
{
int k = a + (x - a) / 2;
int i = k * k;
if (i == n)
{
z = k;
break;
}
else if (i < n)
{
a = k + 1;
}
else
{
x = k - 1;
}
}
return (z);
}
}
