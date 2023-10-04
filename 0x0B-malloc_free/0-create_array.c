#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of char
 * @size: size
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *q;
unsigned int n;
if (size == 0)
return (NULL);
q = malloc(sizeof(c) * size);
if (q == NULL)
return (NULL);
for (n = 0; n < size; n++)
q[n] = c;
return (q);
}
