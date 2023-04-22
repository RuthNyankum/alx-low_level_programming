#include<stdio.h>
/**
*main - prints alphabet in low and uppercase
*Return: 0 (Success)
*/
int main(void)
{
int s = 97, e = 122;
while (s <= e)
{
putchar(s);
s++;
}
s = 65;
e = 90;
while (s <= e)
{
putchar(s);
s++;
}
putchar('\n');
return (0);
}
