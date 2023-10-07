#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocat memory
 * @b: bytes
 * Return: status 98
 */
void *malloc_checked(unsigned int b)
{
void *point = malloc(b);
if (point == NULL)
{
exit(98);
}
return (point);
}
