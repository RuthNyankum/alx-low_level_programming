#include "main.h"
#include <stdio.h>

/**
* print_buffer - a function that prints a buffer.
* @b: buffer
* @size: size
* Return: void
*/

void print_buffer(char *b, int size)
{
int o, t, i;

o = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (o < size)
{
t = size - o < 10 ? size - o : 10;
printf("%08x: ", o);
for (i = 0; i < 10; i++)
{
if (i < t)
printf("%02x", *(b + o + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < t; i++)
{
int c = *(b + o + i);

if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
}
}
