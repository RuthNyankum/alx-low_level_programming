#include "main.h"

/**
* _memset - a function that fills memory with a constant byte
* @s: pointed area
* @b: constant byte
* @n: byte to fill
* Return:  a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;
for (t = 0; t < n; t++)

{
s[t] = b;
}
return (s);
}
