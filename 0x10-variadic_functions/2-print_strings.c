#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: char
* @n: int
* @...: A variable number
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *t;
unsigned int index;

va_start(strings, n);

for (index = 0; index < n; index++)
{
t = va_arg(strings, char *);

if (t == NULL)
printf("(nil)");
else
printf("%s", t);

if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(strings);
}

