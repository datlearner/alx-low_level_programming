#include <stddef.h>
#include "3-calc.h"
/**
 * main - check code
 * @argc: argument
 * @argv: argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, x;
int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (argv[2][1])
{
printf("Error\n");
exit(99);
}
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
i = atoi(argv[1]);
x = atoi(argv[3]);
printf("%d\n", operation(i, x));
return (0);
}
