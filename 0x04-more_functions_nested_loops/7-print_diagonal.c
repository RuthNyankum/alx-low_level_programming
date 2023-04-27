#include "main.h"

/**
* print_diagonal - a function that draws a diagonal line on the terminal.
* @n: the number of times
* Return: empty
*/

void print_diagonal(int n)

{
int t, u;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < n; t++)
{
for (u = 0; u < t; u++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
