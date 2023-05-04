#include "main.h"

/**
* _strncpy - a function that copies a string.
* @dest: string one
* @src: string two
* @n: the number of byte
* Return: 0
*/

char *_strncpy(char *dest, char *src, int n)

{
int t;
for (t = 0; t < n && src[t] != ‘\0’ t++)
dest[t] = src[t];

for (; n > t; t++)
dest[t] = '\0';
return (dest);
}
