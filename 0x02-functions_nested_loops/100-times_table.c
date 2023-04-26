#include "main.h"

/**
* print_times_table - a function that prints the n times table
* Description: If 't' is greater than 15 or less than 0, print nothing.
* @t: int type number
*/

void print_times_table(int t)
{
int x = 0, y, z;
if (t > 15 || t < 0)
return;
while (x <= t)
{
for (y = 0; y <= t; y++)
{
z = x * y;
if (z > 99)
{
_putchar(z / 100 + '0');
_putchar((z / 10 % 10) + '0');
_putchar(z % 10 + '0');
}
else if (z > 9)
{
_putchar(' ');
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
else if (y != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else
_putchar(z + '0');
if (y != t)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
x++;
}
}
