#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - a function that prints anything.
* @format: arguments
*/

void print_all(const char * const format, ...)
{
int t = 0;
char *u, *sep = "";

va_list list;

va_start(list, format);

if (format)
{
while (format[t])
{
switch (format[t])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 't':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
u = va_arg(list, char *);
if (!u)
u = "(nil)";
printf("%s%s", sep, u);
break;
default:
t++;
continue;
}
sep = ", ";
t++;
}
}

printf("\n");
va_end(list);
}
