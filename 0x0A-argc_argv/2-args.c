#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments it received
*@argc: argument count
*@argv: argument vector
*Return: returns 0
*/
int main(int argc, char *argv[])
{
int loop;
for (loop = 0; loop < argc; loop++)
printf("%s\n", argv[loop]);
return (0);
}
