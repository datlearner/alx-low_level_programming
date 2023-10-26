#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ui;
int length, power_of_two;
if (!b)
return (0);
ui = 0;
for (length = 0; b[length] != '\0'; length++)
;
for (length--, power_of_two = 1; length >= 0; length--, power_of_two *= 2)
{
if (b[length] != '0' && b[length] != '1')
{
return (0);
}
if (b[length] & 1)
{
ui += power_of_two;
}
}
return (ui);
}

