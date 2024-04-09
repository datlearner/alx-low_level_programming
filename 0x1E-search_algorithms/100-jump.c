#include "search_algos.h"
/**
 * jump_search - value in a sorted
 * array of integers using the Jump search algorithm
 * @array : array to search in.
 * @size :  size of elements in array.
 * @value :  value.
 * Return: first index located.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, move = sqrt(size), j;

	if (array == NULL || size == 0)
		return (-1);

	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", j, array[j]);
		i = j;
		j += move;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	j = j > size - 1 ? j : size - 1;
	for (; i < j && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
