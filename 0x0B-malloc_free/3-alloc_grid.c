#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **q;
int b, m;
if (width < 1 || height < 1)
return (NULL);
q = malloc(height * sizeof(int *));
if (q == NULL)
{
free(q);
return (NULL);
}
for (b = 0; b < height; b++)
{
q[b] = malloc(width * sizeof(int));
if (q[b] == NULL)
{
for (b--; b >= 0; b--)
free(q[b]);
free(q);
return (NULL);
}
}
for (b = 0; b < height; b++)
for (m = 0; m < width; m++)
q[b][m] = 0;
return (q);
}
