#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: some conditions
 */
int _strcmp(char *s1, char *s2)
{
int g = 0, d = 0;
while (1)
{
if (s1[g] == '\0' && s2[g] == '\n')
break;
else if (s1[g] == '\0')
{
d = s2[g];
break;
}
else if (s1[g] != s2[g])
{
d = s1[g] - s2[g];
break;
}
else
{
g++;
}
}
return (d);
}
