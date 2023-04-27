#include "main.h"

/**
* print_square - a function that prints a square
* @size: the number of the square
*/

void print_square(int size)

{
int t, u;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < size; t++)
{
for (u = 0; u < size; u++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

