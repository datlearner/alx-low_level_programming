#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates
 * @s1: - string
 * @s2: string
 * @n: integer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int k = (s1 == NULL) ? 0 : strlen(s1);
unsigned int b = (s2 == NULL) ? 0 : strlen(s2);
unsigned int i = k + ((n > b) ? b : n);
char *r = malloc(i + 1);
if (r == NULL)
return (NULL);
if (s1 != NULL)
strcpy(r, s1);
strncat(r, s2, n);
return (r);
}
