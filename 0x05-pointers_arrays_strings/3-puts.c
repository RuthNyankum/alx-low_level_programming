#include "main.h"

/**
* _puts - a function that prints a string, followed by a new line, to stdout
* @str: char string to print
* Return: 0
*/

void _puts(char *str)
{
	int t = 0; /* int used to print the string */

	while (str[t] != '\0')
	{
		_putchar(str[t]);
		t++;
	}
	_putchar('\n');
}
