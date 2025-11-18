#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_strings - a function that print_strings
* @n: the number of strings passed to the function
* @separator: the string to be printed between the strings
* Return: new line at the end of your function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *argsname;
va_start(ap, n);
for (i = 0; i < n; i++)
{
argsname = va_arg(ap, char*);
if (argsname)
{
printf("%s", argsname);
}
else
{
printf("(nil)");
}
if (i < (n - 1) && separator)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
