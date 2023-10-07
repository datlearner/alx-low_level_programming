#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates array
 * @min: minimum value
 * @max: maximum
 * Return: Pointer
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);
arr = (int *) malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
arr[i] = min;
return (arr);
}
