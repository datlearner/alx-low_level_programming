#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes
 * @array: array.
 * @size: size
 * @action: pointer
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
unsigned int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
