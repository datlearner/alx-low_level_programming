#include "main.h"
/**
 * cap_string - capitize first character
 * @s: string to capitalize
 * Return: capitalised string
 */
char *cap_string(char *s)
{
int m, j;
char symbols[] = " \t\n,;.!?\"(){}";
m = 1;
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= ('a' - 'A');
while (s[m] != '\0')
{
for (j = 0; symbols[j] != '\0'; j++)
if (s[m - 1] == symbols[j] && (s[m] >= 'a' && s[m] <= 'z'))
s[m] -= ('a' - 'A');
m++;
}
return (s);
}
