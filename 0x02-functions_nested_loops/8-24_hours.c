#include "main.h"

/**
* jack_bauer -  a function that prints every minute of the
* day of Jack Bauer
* Return: ...
*/

void jack_bauer(void)
{
int u, v, w, x;
for (u = 0; u <= 2; u++)
{
for (v = 0; v <= 9; v++)
{
if ((u <= 1 && v <= 9) || (u <= 2 && v <= 3))
{
for (w = 0; w <= 5; w++)
{
for (x = 0; x <= 9; x++)
{
_putchar(u + '0');
_putchar(v + '0');
_putchar(58);
_putchar(w + '0');
_putchar(x + '0');
_putchar('\n');
}
}
}
}
}
}
