#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies n bytes
 * @n: copies n bytes
 * @src: memory area
 * @dest: dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int first_Loop;
for (first_Loop = 0; first_Loop < n; first_Loop++)
{
dest[first_Loop] = src[first_Loop];
}
return (dest);
}
