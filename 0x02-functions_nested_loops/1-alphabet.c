#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - check the code
 * description:  prints the alphabet
 * Return: Always 0 (Sucess)
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
