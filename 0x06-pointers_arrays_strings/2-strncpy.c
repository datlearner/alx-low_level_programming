#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: prints char
 * @src: prints char
 * @n: bytes from src
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
int y;
for (y = 0; y < n && src[y] != '\0'; y++)
dest[y] = src[y];
for ( ; y < n; y++)
dest[y] = '\0';
return (dest);
}
