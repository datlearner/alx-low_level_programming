#include <stdio.h>
#include <unistd.h>
/**
 * main - writes _putchar
 * Return: 0 (Success)
 */
int main(void)
{
char name[] = "_putchar\n";
int i;
for (i = 0; name[i] != '\0'; i++)
{
putchar(name[i]);
}
return (0);
}
