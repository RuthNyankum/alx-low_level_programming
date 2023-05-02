#include "main.h"

/**
* puts_half - a function that prints half of a string, followed by a new line.
* @str: char of half of a string
* Return: 0
*/

void puts_half(char *str)
{
int t = 0;
int u;

while (str[t] != '\0')
{
t++;
}
if (t % 2 == 1)
{
u = (t - 1) / 2;
u += 1;
}
else
{
u = t / 2;
}
for (; u < t; u++)
{
_putchar(str[u]);
}
_putchar('\n');
}
