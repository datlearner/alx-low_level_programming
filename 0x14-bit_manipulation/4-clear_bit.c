#include "main.h"

/**
 * clear_bit - Sets the value of a bit .
 * @n: pointer to the bit.
 * @index: The index to set the value
 * Return: an error Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
*n = *n & ~(1UL << index);
return (1);
}
