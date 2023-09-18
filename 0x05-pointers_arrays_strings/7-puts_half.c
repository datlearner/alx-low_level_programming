#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string
 */
void puts_half(char *str)
{
int len, m, j;
len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
for (j = len / 2; str[j] != '\0'; j++)
{
putchar(str[j]);
}
}
else if (len % 2)
{
for (m = (len - 1) / 2; m < len - 1; m++)
{
putchar(str[m + 1]);
}
}
putchar('\n');
}
