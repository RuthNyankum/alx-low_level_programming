#include "main.h"

/**
* print_line - a function that draws a straight line in the terminal
* @n: number of times
* Return: empty
*/

void print_line(int n)

{
int t;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < n; t++)
{
_putchar(95);
}
_putchar('\n');
}
}
