#include "main.h"
/**
 * _strlen - length of a string.
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int k;
if (!s)
return (0);
k = 0;
while (s[k])
k++;
return (k);
}
