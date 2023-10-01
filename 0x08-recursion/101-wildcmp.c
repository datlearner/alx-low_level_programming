#include <stdio.h>
#include "main.h"
/**
 * wildcmp - comparison
 * @s1: string
 * @s2: string
 * Return: one otherwise zero
 */
int wild_Cmp(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
return (wild_Cmp(*s1, *s2));
}
/**
 * wild_Cmp - condition comparison
 * @s1: string
 * @s2: string
 * Return: condition
 */
int wild_Cmp(char *s1, char *s2)
{
if (*s == '\0' && *s2 == '\0')
return (1);
if (*s2 == '*')
{
if (*(*s2 + 1) == '\0')
return (1);
else if (*s1 == '\0')
return (0);
else
return (wild_Cmp(*s1 + *s2 + 1) || wild_Cmp(*s1 + 1, *s2));
}
if (s == *s2 || *s2 == '?')
return (wild_Cmp(*s1 + 1, *s2 + 1));
return (0);
}
