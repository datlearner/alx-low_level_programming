#include "main.h"

/**
 * _isdigit - function that chhecks zero through nine
 * @c: parameter
 * Return: 1 (success) and 0 on failure
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
