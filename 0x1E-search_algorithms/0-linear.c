#include "search_algos.h"
/**
 * linear_search - value in an array
 * @array : array
 * @size : size of elements in array.
 * @value : value to search.
 * Return: first index of located value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
