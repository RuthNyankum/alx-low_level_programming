#include "main.h"

/**
* print_rev - a function that prints a string, in reverse
* @s: reverse string
* Return: 0
*/

void print_rev(char *s)
{
	int t, u; /* reverse variable to print string */

	u = 0;

	while (s[u] != '\0')
		u++;

	for (t = u - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}

