#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * in_pali - return 1
 * @s: string
 * @x: int
 * @e: int
 * Return: one and zero
 */
int is_palindrome(char *s);
int in_pali(char *s, int x, int e)
{
if (x >= e)
{
return (1);
}
if (s[x] != s[e])
{
return (0);
}
return (in_pali(s, x + 1, e - 1));
}
/**
 * is_palindrome - returns one
 * @s: string
 * Return: 1 and 0 if not
 */
int is_palindrome(char *s)
{
int y = strlen(s);
return (in_pali(s, 0, y - 1));
}
