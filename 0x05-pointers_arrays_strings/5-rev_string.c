#include "main.h"
/**
 * rev_string - reverse a string
 * @s: reverse string
 * return: none
 */
void rev_string(char *s)
{
int count = 0, k, m;
char *str, temp;
while (count >= 0)
{
if (s[count] == '\0')
break;
count++;
}
str = s;
for (k = 0; k < (count - 1); k++)
{
for (m = k + 1; m > 0; m--)
{
temp = *(str + m);
*(str + m) = *(str + (m - 1));
*(str + (m - 1)) = temp;
}
}
}
