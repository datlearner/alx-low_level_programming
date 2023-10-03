#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiplication
*@argc: argument count
*@argv: argument vector
*Return: returns 0
*/
int main(int argc, char *argv[])
{
int loop, k, h;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
loop = atoi(argv[1]);
k = atoi(argv[2]);
h = loop *k;
printf("%d\n", h);
return (0);
}
