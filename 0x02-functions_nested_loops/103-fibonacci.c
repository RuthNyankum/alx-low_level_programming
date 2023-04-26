#include <stdio.h>

/**
* main - Fibonacci sequence
* Desription: prints the sum of the even-valued terms
* Return: 0
*/

int main(void)
{
int a = 1, b = 2, snow = 0;
int c;
while (b < 4000000)
{
if (b % 2 == 0)
snow += b;
c = b;
b += a;
a = c;
}
printf("%d\n", snow);
return (0);
}
