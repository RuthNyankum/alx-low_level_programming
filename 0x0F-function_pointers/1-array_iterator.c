#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - a function that executes a function given as
* a parameter on each element of an array.
* @array: array
* @size: size
* @action: pointer
* Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int t;
if (array == NULL || action == NULL)
return;

for (t = 0; t < size; t++)
{
action(array[t]);
}
}
