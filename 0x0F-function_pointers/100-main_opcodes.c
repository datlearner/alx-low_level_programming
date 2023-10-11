#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: acount
 * @argv: avector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char *a = (char *) main;
int i, k;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
k = atoi(argv[1]);
if (k < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < k; i++)
{
printf("%02x", a[i] & 0xFF);
if (i != k - 1)
printf(" ");
}
printf("\n");
return (0);
}
