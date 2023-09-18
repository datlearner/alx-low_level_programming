#include <stdio.h>
#include "main.h"
/**
 * _puts - string
 * @str: output string
 * description: function that prints a string
 * On success: return the characters
 */
void _puts(char *str)
{
if (str)
while (*str != '\0')
putchar(*str++);
putchar('\n');
}
