#include<stdio.h>
/**
*main - prints all possible combination of single digit
*Return: 0 (Success)
*/
int main(void)
{
int s = 0, e = 9;
while (s <= e)
{
putchar(s + '0');
if (s != e)
{
putchar(',');
putchar(' ');
}
s++;
}
putchar('\n');
return (0);
}
