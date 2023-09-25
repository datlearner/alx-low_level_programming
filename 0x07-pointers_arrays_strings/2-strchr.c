#include <stdio.h>
#include "main.h"
/**
 * _strchr -  first occurrence of the character
 * @c: string
 * @s: string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
int loop;
for (loop = 0; s[loop] >= '\0'; loop++)
{
if (s[loop] == c)
return (s + loop);
}
return ('\0');
}
