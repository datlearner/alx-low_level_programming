#include "main.h"
/**
 * main - copies the content
 * @argc: argumentc
 * @argv: argumentv
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int source_fd, dest_fd, bytes_read, close_source, close_dest;
char buffer[BUFSIZ];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
source_fd = open(argv[1], O_RDONLY);
if (source_fd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((bytes_read = read(source_fd, buffer, BUFSIZ)) > 0)
{
if (dest_fd < 0 || write(dest_fd, buffer, bytes_read) != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(source_fd);
exit(99);
}
}
if (bytes_read < 0) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
close_source = close(source_fd);
close_dest = close(dest_fd);
if (close_source < 0 || close_dest < 0)
{
if (close_source < 0)
dprintf(STDERR_FILENO, "Error: Can't close source_fd %d\n", source_fd);
if (close_dest < 0)
dprintf(STDERR_FILENO, "Error: Can't close dest_fd %d\n", dest_fd);
exit(100);
}
return (0);
}
