#include "main.h"

/**
* swap_int - a function that swaps the values of two integers.
* @a: first int
* @b: second int
* Return: 0
*/

void swap_int(int *a, int *b)
{
	int t; /** int introduce to swap */

	t = *a;
	*a = *b;
	*b = t;
}
