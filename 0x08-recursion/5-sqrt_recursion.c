#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - square root of Number
 * @n: does not have a natural number
 * @digit: digit
 * Return: -1
 */
int sqrr(int n, int digit);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (sqrr(n, n / 2));
}
}
/**
 * sqrr - calc sqr
 * @n: digit
 * @digit: digit number
 * Return: sqr
 */
int sqrr(int n, int digit)
{
int new_digit = (digit + n / digit) / 2;
if (new_digit == digit || new_digit + 1 == digit)
{
return (digit);
}
return (sqrr(n, new_digit));
}
