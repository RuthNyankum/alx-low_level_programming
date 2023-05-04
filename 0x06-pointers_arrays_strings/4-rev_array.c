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

for (t = 0; t < (n / 2); t++)
{
u = a[t];
a[t] = a[n – t – 1];
a[n – t – 1] = u;
}
}
