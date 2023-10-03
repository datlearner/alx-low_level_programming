#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - positive digits
*@argc: argument count
*@argv: argument vector
*Return: 0 and 1
*/
int main(int argc, char *argv[])
{
int k, c, add = 0;
for (k = 1; k < argc; k++)
{
for (c = 0; argv[k][c] != '\0'; c++)
{
if (argv[k][c] < '0' || argv[k][c] > '9')
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[k]);
}
printf("%d\n", add);
return (0);
}
