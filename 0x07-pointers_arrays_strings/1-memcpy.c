#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: copy to
* @src: memory area
* @n: byte
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsugned int t;
for (t = 0; t < n; t++)
dest[t] = src[t];
return (dest);
}
