#include "main.h"

/**
 * print_diagonal - prints diagonal with the '\' char
 * @n: number of times '\' should be printed
 * Return: void
 */
void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
