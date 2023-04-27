#include "main.h"

/**
* print_triangle - a function that prints a triangle, followed by a new line
* @size: size of triangle
*/

void print_triangle(int size)
{
int t, u, v;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < size; t++)
{
for (u = size - t; u > 1; u--)
{
_putchar(32);
}
for (v = 0; v <= t; v++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
