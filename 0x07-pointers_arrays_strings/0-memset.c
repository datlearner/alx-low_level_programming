#include <stdio.h>
#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * @n: first bytes
 * @s: constant byte
 * @b: byte
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int vv;
for (vv = 0; n > 0; vv++, n--)
{
s[vv] = b;
}
return (s);
}
