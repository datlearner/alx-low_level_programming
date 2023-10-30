#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: file to be read
 * @letters: number of letters
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);
buffer = (char *)malloc(sizeof(char) * letters);
if (!buffer)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read < 0)
{
free(buffer);
close(fd);
return (0);
}
buffer[bytes_read] = '\0';
close(fd);
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written < 0)
{
free(buffer);
return (0);
}
free(buffer);
return (bytes_written);
}
