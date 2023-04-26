#include <stdio.h>

/**
* main - program to print
* Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
* Return: 0
*/

int main(void)
{
int snow = 2;
long int a = 1, b = 2;
long int c;
printf("%lu, ", a);
while (snow <= 50)
{
if (snow == 50)
{
printf("%lu\n", b);
}
else
{
printf("%lu, ", b);
}
c = b;
b += a;
a = c;
snow++;
}
return (0);
}

