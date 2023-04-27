#include <stdio.h>
#include <math.h>

/**
* main - a program that finds and prints the largest prime factor
* Return: 0
*/

int main(void)
{
long t, maxf;
long number = 612852475143;
double square = sqrt(number);

for (t = 1; t <= square; t++)
{
if (number % t == 0)
{
maxf = number / t;
}
}
printf("%ld\n", maxf);
return (0);
}
