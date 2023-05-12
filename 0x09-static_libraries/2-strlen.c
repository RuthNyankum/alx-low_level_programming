#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: char for string
* Return: 0
*/

int _strlen(char *s)
{
	int t = 0; /* counting begins from 0 through to the end */

	for (; *s++;)
		t++;
	return (t);
}
