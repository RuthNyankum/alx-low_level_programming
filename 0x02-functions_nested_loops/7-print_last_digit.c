#include "main.h"

/**
* print_last_digit - a function that prints the last digit of a number
* @t: The number to be used
* Return: Value of the last digit of the number
*/

int print_last_digit(int t)
{
int a;
if (t < 0)
t = -t;
a = t % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
