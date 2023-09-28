#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - x rasied to the power of y
 * @x: raised to the power
 * @y: raiseed
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
return (0);
}
