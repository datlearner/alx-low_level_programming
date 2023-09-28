#include <stdio.h>
#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: -1 to indicate an error
 * Return: factorial of a given number
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
