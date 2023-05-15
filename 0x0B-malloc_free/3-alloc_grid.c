#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - a function that returns a
* pointer to a 2 dimensional array of integers.
* @width: width
* @height: height
* Return: Pointer to new grid
*/

int **alloc_grid(int width, int height)
{
int **t;
int u, v;

if (width <= 0 || height <= 0)
return (NULL);

t = malloc(sizeof(int *) * height);
if (t == NULL)
return (NULL);

for (u = 0; u < height; u++)
{
t[u] = malloc(sizeof(int) * width);

if (t[u] == NULL)
{
for (; u >= 0; u--)
free(t[u]);

free(t);
return (NULL);
}
}
for (u = 0; u < height; u++)
{
for (v = 0; v < width; v++)
t[u][v] = 0;
}
return (t);
}
