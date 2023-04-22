#include<stdio.h>
/**
*main - prints all digit of numbers of base 10 starting
*from 0.
*Return: 0 (Success)
*/
int main(void)
{
int s = 0, e = 9;
while (s <= e)
{
putchar(s + '0');
s++;
}
putchar('\n');
return (0);
}
