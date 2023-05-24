#include "function_pointers.h"
/**
* int_index - a function that searches for an integer.
* @array: array
* @size: size
* @cmp: pointer
* Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int t;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (t = 0; t < size; t++)
{
if (cmp(array[t]))
return (t);
}
return (-1);
}
