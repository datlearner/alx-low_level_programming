#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints number
 * @separator: string
 * @n: number
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int h;
va_start(valist, n);
for (h = 0; h < n; h++)
{
printf("%d", va_arg(valist, int));
if (separator || h < n - 1)
{
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
}
