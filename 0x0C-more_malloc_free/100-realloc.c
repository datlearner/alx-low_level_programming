#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - reallocates memory
 * @ptr: Pointer
 * @old_size: Size
 * @new_size: Size
 * Return: Pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
free(ptr);
ptr = malloc(new_size);
return (ptr);
}
