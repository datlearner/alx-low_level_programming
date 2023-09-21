#include "main.h"
/**
 * string_toupper - function that changes lowercase letter
 * @str: Pointer to the null-terminated string to be converted
 * Return: Pointer to the converted string
 */
char *string_toupper(char *str)
{
int index = 0;
while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}
return (str);
}
