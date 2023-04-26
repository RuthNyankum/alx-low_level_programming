#include "main.h"
#include <stdio.h>
/**
* print_to_98 -  a function that prints all natural numbers from n to 98
* @t: int type number
*/

void print_to_98(int t)
{
if (t > 98)
{
while (t >= 98)
{
printf("%d", t);
if (t != 98)
{
printf(", ");
}
t--;
}
}
else
{
while (t <= 98)
{
printf("%d", t);
if (t != 98)
{
printf(", ");
}
t++;
}
}
printf("\n");
}
