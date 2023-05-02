#include "main.h"

/**
* puts2 - a function that prints every other character of a string,
* starting with the first character, followed by a new line
* @str: char of a string
* Return: 0
*/

void puts2(char *str)
{
int t;
int u = 0;
while (str[u] != '\0')
{
u++;
}
for (t = 0; t < u; t += 2)
{
_putchar(str[t]);
}
_putchar('\n');
}
