#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string
 * @s: string to print
 * return: none
 */
void print_rev(char *s)
{
int n;
int count = 0;
for (n = 0; s[n] != '\0'; n++)
count++;
for (n = count - 1; n >= 0; n--)
putchar(s[n]);
putchar('\n');
}
