#include "main.h"

/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
* in lowercase
*/

void print_alphabet_x10(void)
{
char snow;
int t = 0;

while (t++ <= 9)
{
for (snow = 'a'; snow <= 'z'; snow++)
_putchar(snow);
_putchar('\n');
}
}
