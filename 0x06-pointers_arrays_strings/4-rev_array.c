#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers
* @a: array
* @n: number of elements of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
int t;
int u;

for (t = 0; t < n--; t++)
{
u = a[t];
a[t] = a[n];
a[n] = u;
}
}
