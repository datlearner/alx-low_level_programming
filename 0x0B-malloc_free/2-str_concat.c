#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *q;
unsigned int u, x, b, m;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (u = 0; s1[u] != '\0'; u++)
;
for (x = 0; s2[x] != '\0'; x++)
;
q = malloc(sizeof(char) * (u + x + 1));
if (q == NULL)
{
free(q);
return (NULL);
}
for (b = 0; b < u; b++)
q[b] = s1[b];
m = x;
for (x = 0; x <= m; b++, x++)
q[b] = s2[x];
return (q);
}
