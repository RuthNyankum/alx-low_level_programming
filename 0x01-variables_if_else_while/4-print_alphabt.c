#include<stdio.h>
/**
*main - program that print the alphabet in lowcase
*Return: 0 (Success)
*/
int main(void)
{
int s = 97, e = 122;
while (s <= e)
{
if (s != 'q' && s != 'e')
putchar(s);
s++;
}
putchar('\n');
return (0);
}
