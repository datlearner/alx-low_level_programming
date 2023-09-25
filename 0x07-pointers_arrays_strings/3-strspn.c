#include <stdio.h>
#include "main.h"
/**
 * _strspn - length of a prefix substring.
 *@s: intial segment
 *@accept: bytes
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int loop;
while (*s)
{
for (loop = 0; accept[loop]; loop++)
{
if (*s == accept[loop])
{
bytes++;
break;
}
else if (accept[loop + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
