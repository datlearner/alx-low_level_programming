#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates
 * @ac: argument count.
 * @av: argument vector.
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
char *aout;
int c, q, k, ia;
if (ac == 0)
return (NULL);
for (c = q = 0; q < ac; q++)
{
if (av[q] == NULL)
return (NULL);
for (k = 0; av[q][k] != '\0'; k++)
c++;
c++;
}
aout = malloc((c + 1) * sizeof(char));
if (aout == NULL)
{
free(aout);
return (NULL);
}
for (q = k = ia = 0; ia < c; k++, ia++)
{
if (av[q][k] == '\0')
{
aout[ia] = '\n';
q++;
ia++;
k = 0;
}
if (ia < c - 1)
aout[ia] = av[q][k];
}
aout[ia] = '\0';
return (aout);
}
