#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring.
 * @needle: string
 * @haystack: terminating
 * Return: located substring
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *h_p = haystack;
char *n_r = needle;
while (*h_p == *n_r && *n_r != '\0')
{
h_p++;
n_r++;
}
if (*n_r == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
