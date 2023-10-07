#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strlen -  length
 * @string: string
 * Return: len
 */
int _strlen(char *string)
{
int v;
v = 0;
while (string[v] != '\0')
{
v++;
}
return (v);
}
/**
 * string_nconcat - concatenates
 * @s1: - string
 * @s2: string
 * @n: integer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int k, x, o, i, j;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
k = _strlen(s1);
x = _strlen(s2);
if (n >= x)
o = k + x + 1;
else
{
o = k + n + 1;
x = n;
}
str = malloc(o);
if (str == NULL)
return (NULL);
i = 0;
while (i < k)
{
str[i] = s1[i];
i++;
}
j = 0;
while (j < x)
{
str[i + j] = s2[j];
j++;
}
str[i + j] = '\0';
return (str);
}
