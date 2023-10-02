#include "main.h"
/**
* _atoi - changes ascii to int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
int b, d, a, len, f, digit;
b = 0;
d = 0;
a = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (b < len && f == 0)
{
if (s[b] == '-')
++d;
if (s[b] >= '0' && s[b] <= '9')
{
digit = s[b] - '0';
if (d % 2)
digit = -digit;
a = a * 10 + digit;
f = 1;
if (s[b + 1] < '0' || s[b + 1] > '9')
break;
f = 0;
}
b++;
}
if (f == 0)
return (0);
return (a);
}
