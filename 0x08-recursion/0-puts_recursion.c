#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - string, followed by a new line
 * @s: character
 * Return: new line
 */
void _puts_recursion(char *s)
{
if (*s <= '0')
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
