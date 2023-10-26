#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: big-endian - zero little-endian - 1.
 */
int get_endianness(void)
{
int integerToCheck = 1;
char *bytePointer = (char *)&integerToCheck;
if (*bytePointer == 1)
return (1);
return (0);
}
