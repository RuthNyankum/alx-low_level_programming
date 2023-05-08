#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: copied to
* @src: memory area
* @n: byte
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
int t = 0;
int u = n;

for (; t < u; t++)
{
dest[t] = src[u];
n--;
}
return (dest);
}

