#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: array.
 * @size: size
 * @cmp: compare values.
 * Return: matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;
if (array == NULL || cmp == NULL)
return (-1);
while (x < size)
{
if (cmp(array[x]) != 0)
return (x);
x++;
}
return (-1);
}
