#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pass[100];
int j, sum, k;
sum = 0;
srand(time(NULL));
for (j = 0; j < 100; j++)
{
pass[j] = rand() % 78;
sum += (pass[j] + '0');
putchar(pass[j] + '0');
if ((2772 - sum) - '0' < 78)
{
k = 2772 - sum - '0';
sum += k;
putchar(k + '0');
break;
}
}
return (0);
}
