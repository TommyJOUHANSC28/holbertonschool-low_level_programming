#include "main.h"
/**
* _strcpy - Copies a string
* @dest: Pointer to the destination buffer
* @src: Source string to copy
*
* This function copies the string pointed to by @src (character '\0')
* into the buffer pointed to by @dest.
*
* Return: Pointer to @dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
