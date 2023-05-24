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

if (size < 1 || array == NULL || cmp == NULL)
return (-1);

for (t = 0; t < size; t++)
{
if (cmp(array[t]))
return (i);
}

return (-1);
}
