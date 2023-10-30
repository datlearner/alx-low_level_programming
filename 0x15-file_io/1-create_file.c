#include "main.h"
/**
 * create_file - creates a file and fills with text
 * @filename: file to create
 * @text: text to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text)
{
int fd, wr, count = 0;
if (!filename)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd < 0)
return (-1);
if (text)
{
while (text[count])
count++;
wr = write(fd, text, count);
if (wr != count)
return (-1);
}
close(fd);
return (1);
}
