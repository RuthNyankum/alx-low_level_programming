#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* main - print the sum of multiples
* Desription: print the sum of all multiples of 3 or 5 below 1024.
* Return: 0
*/

int main(void)
{
int t = 1;
int snow = 0;
while (t < 1024)
{
if (t % 3 == 0)
snow += t;
else if (t % 5 == 0)
snow += t;
t++;
}
printf("%d\n", snow);
return (0);
}

