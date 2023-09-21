#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenat
 * @dest: concatenates
 * @src: string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int r;
int b = 0;
while (dest[b] != '\0')
{
b++;
}
for (r = 0 ; r < b && src[r] != '\0' ; r++)
dest[b + r] = src[r];
dest[b + r] = '\0';
return (dest);
}
