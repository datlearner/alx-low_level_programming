#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: num
 * @argv: num
 * Return: positives int
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
char *n1 = argv[1];
char *n2 = argv[2];
for (int i = 0; n1[i] || n2[i]; i++)
{
if (!isdigit(n1[i]) || !isdigit(n2[i]))
{
printf("Error\n");
return (98);
}
}
printf("%ld\n", atol(n1) * atol(n2));
return (0);
}
