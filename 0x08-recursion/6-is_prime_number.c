#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - prime number
 * prime - takes 2 integers
 * @n: number
 * @k: number
 * Return: 1 n is prime number, 0 otherwie
 */
int prime(int n, int k);
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n <= 3)
{
return (1);
}
if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
return (prime(n, 5));
}
/**
 * prime - takes 2 integers
 * @n: number
 * @k: number
 * Return: prime
 */
int prime(int n, int k)
{
if (k * k > n)
{
return (1);
}
if (n % k == 0 || n % (k + 2) == 0)
{
return (0);
}
return (prime(n, k + 6));
}
