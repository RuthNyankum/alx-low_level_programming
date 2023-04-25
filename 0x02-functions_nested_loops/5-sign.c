#include "main.h"

/**
* print_sign - a function that prints the sign of a number
* @t: the num to be checked for
* Return: 1 and prints + if t is greater than zero
* 0 and prints 0 if t is zero
* -1 and prints - if t is less than zero
*/

int print_sign(int t)
{
if (t > 0)
{
_putchar('+');
return (1);
}
else if (t == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
