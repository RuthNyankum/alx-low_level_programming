#include "main.h"

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
* Return: number from 0 to 9
*/

void print_most_numbers(void)
{
int t = 0;
for (; t <= 9; t++)
{
if (t == 2 || t == 4)
{
continue;
}
else
{
_putchar(t + '0');
}
}
_putchar('\n');
}
