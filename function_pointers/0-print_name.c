#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - a function that prints a name
* @name: string for name
* @f: pointer for all charactere
* Return: value of f
*/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
