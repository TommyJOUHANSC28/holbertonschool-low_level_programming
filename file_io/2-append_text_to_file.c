#include "main.h"
/**
* append_text_to_file - Function that appends text at the end of a file
* @filename: The name of the file to create
* @text_content:  string to write to the file
* Return: 1 on success or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fdOpen, fdWrite, lenght = 0;
if (filename == NULL)
return (-1);
fdOpen = open(filename, O_WRONLY | O_APPEND);
if (fdOpen == -1)
{
return (-1);
}
if (text_content == NULL)
text_content = "";
while (text_content[lenght] != '\0')
{
lenght++;
}
fdWrite = write(fdOpen, text_content, lenght);
if (fdWrite == -1)
return (-1);
close(fdOpen);
return (1);
}
