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
return (n * _sqrt_recursion(n - 1));
}
}
