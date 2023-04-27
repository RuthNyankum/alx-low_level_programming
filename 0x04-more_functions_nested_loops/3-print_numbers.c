#include "main.h"

/**
* print_numbers - a function that prints the numbers, from 0 to 9
* Return: the numbers from 0 to 9
*/

void print_numbers(void)
{
int t;
for (t = 0; t <= 9; t++)
{
_putchar(t + '0');
}
_putchar('\n');
}
