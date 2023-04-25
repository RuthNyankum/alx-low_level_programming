#include "main.h"

/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*in lowercase
*/

void print_alphabet_x10(void)
{
char ch;
int t = 0;
while (t < 10)
{
for (ch = 'b'; ch <= 'y'; ch++)
{
_putchar(ch);
}
_putchar('\n');
t++;
}
}
