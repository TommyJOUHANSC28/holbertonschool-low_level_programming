#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_all -  function that prints anything
* @format: List of args passed to function
* Return: prints anything
*/
void print_all(const char * const format, ...)
{
char *str;
unsigned int i, check = 0;
va_list ap;
va_start(ap, format);
while (format && format[i])
{
if (check)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%i", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char*);
if (str)
{
printf("%s", str);
break;
}
printf("(nil)");
break;
default:
check = 0;
i++;
continue;
}
check = 1,	i++;
}
putchar('\n');
va_end(ap);
}
