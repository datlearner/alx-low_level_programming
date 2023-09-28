#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - string in reverse
 * @s: string
 * Return: none
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
