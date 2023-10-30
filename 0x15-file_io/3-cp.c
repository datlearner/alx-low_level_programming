#include "main.h"

/**
 * main - copies a file to another file
 * @argc: argumentc
 * @argv: argumentv
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int f, w, r, a, b;
char buf[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f = open(argv[1], O_RDONLY);
if (f < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((r = read(f, buf, BUFSIZ)) > 0)
{
if (w < 0 || write(w, buf, r) != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(f);
exit(99);
}
}
if (r < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
a = close(f);
b = close(w);
if (a < 0 || b < 0)
{
if (a < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
if (b < 0)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", w);
exit(100);
}
return (0);
}
