#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * wildcmp - comparison
 * @s1: string one
 * @s2: string two
 * Return: zero otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
{
return (*s1 == '\0');
}
if (*s1 == *s2 || *s2 == '?')
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
return (0);
}
