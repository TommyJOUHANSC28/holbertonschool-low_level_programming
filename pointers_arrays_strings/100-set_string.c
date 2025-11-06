#include "main.h"
#include <string.h>
/**
* set_string - A function that sets the value of a pointer to a char
* @s: Double Pointer to a char
* @to: pointer to a char
* Return: Value of pointer to a char
*/
void set_string(char **s, char *to)
{
*s = to;
}
