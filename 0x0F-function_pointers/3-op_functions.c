#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two digits.
 * @a: first
 * @b: second
 * Return: add.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subctracts
 * @a: first
 * @b: second
 * Return: d
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplication
 * @a: first
 * @b: second
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division
 * @a: first
 * @b: second
 * Return: division.
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - calculation
 * @a: first
 * @b: second
 * Return: remainder
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
