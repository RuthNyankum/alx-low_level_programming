#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: char
* @n: int
* @...: A variable number
*/
void print_strings(const char *separator, const unsigned int n, …)

{
va_list args;
unsigned int t = 0;
char *string;

if (n > 0)
{
va_start(args, n);

while (t < n)
{
string = va_arg(args, char *);
if (string == NULL)
printf("%s", "(nil)");
else
printf("%s", string);

if (t != n - 1 && separator != NULL)
printf("%s", separator);

t++;
}

va_end(args);
}

printf("\n");
}
