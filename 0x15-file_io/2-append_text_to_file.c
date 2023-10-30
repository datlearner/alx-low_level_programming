#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append
 * @text_content: content to append
 * Return: one on success and -1 on failure
 */

int append_text_to_file(const char *filename, const char *text_content)
{
int fdescriptor, wresult, text_length = 0;
if (!filename)
return (-1);
fdescriptor = open(filename, O_WRONLY | O_APPEND);
if (fdescriptor < 0)
return (-1);
if (text_content)
{
while (text_content[text_length])
text_length++;
wresult = write(fdescriptor, text_content, text_length);
if (wresult != text_length)
return (-1);
}
close(fdescriptor);
return (1);
}
