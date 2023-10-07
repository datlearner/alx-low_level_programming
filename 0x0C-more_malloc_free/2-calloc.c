#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates
 * @nmemb: Number
 * @size: Size
 * Return: Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
return (NULL);
return (calloc(nmemb, size));
}
