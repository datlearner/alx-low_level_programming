#include "main.h"
/**
 * _strncat - concar 2 strings
 * @dest: char
 * @src: char
 * @n: number of bytes
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
int p;
int leng = 0;
while (dest[leng] != '\0')
{
leng++;
}
for (p = 0; p < n && src[p] != '\0'; p++)
dest[leng + p] = src[p];
dest[leng + p] = '\0';
return (dest);
}
