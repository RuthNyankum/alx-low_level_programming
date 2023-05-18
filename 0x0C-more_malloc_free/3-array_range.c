#include <stdlib.h>
#include "main.h"

/**
* *array_range - a function that creates an array of integers.
* @min: min. value
* @max: max. value
* Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *t;
int u, size;

if (min > max)
return (NULL);

size = max - min + 1;

t = malloc(sizeof(int) * size);

if (t == NULL)
return (NULL);

for (u = 0; min <= max; u++)
t[u] = min++;

return (t);
}
