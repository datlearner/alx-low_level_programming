#include "search_algos.h"
/**
 * interpolation_search - value in a sorted search algorithm.
 * @array : array to search in.
 * @size : the size of elements in array.
 * @value : the value.
 * Return: index of value or -1 if not found.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t inter = 0, s = size - 1, move;

	if (array)
	{
		while (inter <= s)
		{
			move = inter + (((double)(s - inter) / (array[s] - array[inter])) *
					(value - array[inter]));
			if (move < size)
				printf("Value checked array[%lu] = [%d]\n", move, array[move]);
			else
			{
				printf("Value checked array[%lu] is out of range\n", move);
				break;
			}
			if (array[move] == value)
				return (move);
			if (array[move] < value)
				inter = move + 1;
			else
				s = move - 1;
		}
	}
	return (-1);
}
