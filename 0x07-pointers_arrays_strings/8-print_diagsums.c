#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of the
* two diagonals of a square matrix of integers.
* @a: int
* @size: int
* Return: 0
*/
void print_diagsums(int *a, int size)
{
int sum1, sum2, t;

sum1 = 0;
sum2 = 0;

for (t = 0; t < size; t++)
{
sum1 = sum1 + a[t * size + t];
}

for (t = size - 1; t >= 0; t--)
{
sum2 += a[t * size + (size - t - 1)];
}

printf("%d, %d\n", sum1, sum2);
}