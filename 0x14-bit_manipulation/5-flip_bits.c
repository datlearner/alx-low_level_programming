#include "main.h"

/**
 * flip_bits - Counts the number of bits
 * @n: number.
 * @m: number to flip
 * Return: The necessary number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int bits = 0;
while (xor_result > 0)
{
bits += xor_result & 1;
xor_result >>= 1;
}
return (bits);
}
