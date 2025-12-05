#include "main.h"
/**
* create_file - Function that creates a file
* @filename: The name of the file to create
* @text_content: string to write to the file
* Return: 1 on success or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fp, lenght = 0, fpWrite;
fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fp == -1)
return (-1);
if (text_content == NULL)
{
text_content = "";
}
while (text_content[lenght] != '\0')
{
lenght++;
}
fpWrite = write(fp, text_content, lenght);
if (fpWrite == -1)
{
return (-1);
}
close(fp);
return (1);
}
