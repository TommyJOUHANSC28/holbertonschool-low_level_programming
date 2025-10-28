#include "main.h"
#include <string.h>
/**
* _strlen - Calculates the length of a string
* @s: Pointer to the string
*
* Return: Length of the string (int)
*/
int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
count++;
return count;
}
