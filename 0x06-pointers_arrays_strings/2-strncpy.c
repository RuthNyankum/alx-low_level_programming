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
int index = 0, src_len = 0;
for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];
for (index = src_len; index < n; index++)
dest[index] = ‘\0’;
return (dest);
}
