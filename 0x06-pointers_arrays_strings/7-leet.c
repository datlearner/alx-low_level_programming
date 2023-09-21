#include "main.h"
/**
 * leet - encode a string
 * @s: encode string
 * Return: ecode string
 */
char *leet(char *s)
{
int a = 0, y = 0, z = 5;
char r[5] = {'A', 'E', 'O', 'T', 'L'};
char n[5] = {'4', '3', '0', '7', '1'};
while (s[a])
{
y = 0;
while (y < z)
{
if (s[a] == r[y] || s[a] - 32 == r[y])
{
s[a] = n[y];
}
y++;
}
a++;
}
return (s);
}
