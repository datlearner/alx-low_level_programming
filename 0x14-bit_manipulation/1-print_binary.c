#include "main.h"

/**
 * print_binary - Prints the binary
 * @n: number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int i;
int size = sizeof(unsigned long int) * 8;
for (i = size - 1; i >= 0; i--)
{
unsigned long int mask = 1UL << i;
_putchar(((n & mask) ? '1' : '0'));
}
}
