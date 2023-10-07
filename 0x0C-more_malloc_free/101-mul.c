#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * isNumber - check a string
 * @s: string
 * Return: 1, 0 if not
 */
int isNumber(char *s)
{
int h;
for (h = 0; s[h]; h++)
if (s[h] < '0' || s[h] > '9')
return (0);
return (1);
}
/**
 * print_result - multiplication
 * @result: array
 * @len: length
 * Return: void
 */
void print_result(int *result, int len)
{
int k;
for (k = 0; k < len && result[k] == 0; k++)
;
if (k == len)
printf("0");
for (; k < len; k++)
printf("%d", result[k]);
printf("\n");
}

/**
 * main - multiplies
 * @ac: number
 * @av: array
 * Return: 0
 */
int main(int ac, char **av)
{
int i, j, n1, n;
int *result;
if (ac != 3 || !isNumber(av[1]) || !isNumber(av[2]))
{
printf("Error\n");
exit(98);
}
n1 = strlen(av[1]);
n = strlen(av[2]);
result = calloc(n1 + n, sizeof(int));
if (result == NULL)
{
printf("Error\n");
exit(98);
}
for (i = n1 - 1; i >= 0; i--)
{
for (j = n - 1; j >= 0; j--)
{
int mul = (av[1][i] - '0') * (av[2][j] - '0');
int sum = result[i + j + 1] + mul;
result[i + j] += sum / 10;
result[i + j + 1] = sum % 10;
}
}
print_result(result, n1 + n);
free(result);
return (0);
}
