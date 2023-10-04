#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
char *t;
unsigned int d, k;
if (str == NULL)
return (NULL);
for (d = 0; str[d] != '\0'; d++)
;
t = (char *)malloc(sizeof(char) * (d + 1));
if (t == NULL)
return (NULL);
for (k = 0; k <= d; k++)
t[k] = str[k];
return (t);
}
