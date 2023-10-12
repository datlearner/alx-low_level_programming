#include  <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns parameters.
 * @n: n
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsigned int k;
int sum = 0;
if (n == 0)
return (0);
va_start(valist, n);
for (k = 0; k < n; k++)
sum += va_arg(valist, int);
va_end(valist);
return (sum);
}
