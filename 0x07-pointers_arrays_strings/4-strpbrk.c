#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - locates the first occurrence
 * @s: string
 * @accept: bytes
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int xz;
while (*s)
{
for (xz = 0; accept[xz]; xz++)
{
if (*s == accept[xz])
return (s);
}
s++;
}
return ('\0');
}
