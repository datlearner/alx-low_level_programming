#include <stdio.h>
/**
 * main - function
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand rand() % 201 - 100;
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}
