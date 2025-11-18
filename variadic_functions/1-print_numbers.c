#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_numbers - function that prints numbers
* @separator: contant of charactere
* @n: constant
* Return: Print a new line at the end of the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
if (separator == NULL)
{
separator = ", ";
}
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator && i < n - 1)
printf("%s ", separator);
}
printf("\n");
va_end(ap);
}
