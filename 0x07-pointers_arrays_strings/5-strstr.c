#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring.
 * @needle: string
 * @haystack: terminating
 * Return: located substring
 */
char *_strstr(char *haystack, char *needle)
{
int e, g, b;
int nlen = 0;
e = 0;
g = 0;
b = 0;
while (needle[nlen] != '\0')
{
nlen++;
}
for (e = 0; haystack[e] != '\0'; e++)
{
for (g = 0; g < nlen && haystack[e] == needle[g]; g++, e++)
{
if (g == 0)
{
b = e;
}
if (g == nlen - 1)
{
return (haystack + b);
}
}
}
return (0);
}
