#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns one
 * @s: string
 * Return: 1 and 0 if not
 */
int is_palindrome(char *s)
{
int b = 0;
int v = strlen(s) - 1;
while (b < v)
{
if (s[b] != s[v])
{
return (0);
}
b++;
v--;
}
return (1);
}
