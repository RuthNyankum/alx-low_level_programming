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

t = 0;
while (t < n && src[t] != '\0')
{
dest[t] = src[t];
t++;
}
while (t < n)
{
dest[t] = '\0';
t++;
}

return (dest);
}
