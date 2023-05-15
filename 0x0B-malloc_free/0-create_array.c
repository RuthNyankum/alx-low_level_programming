#include "main.h"
#include <stdlib.h>
/**
* create_array - a function that creates an array of chars
* @size: array size
* @c: char
* Return: pointer to array, NULL if fail
*/

char *create_array(unsigned int size, char c)
{
char *t;
unsigned int u;

if (size == 0)
return (NULL);

t = malloc(size * sizeof(*t));
if (t == NULL)
return (NULL);

for (u = 0; u < size; u++)
t[u] = c;

return (t);
}
