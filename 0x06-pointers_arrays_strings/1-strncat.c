#include "maih.h"

/**
* _strncat - a function that concatenates two strings.
* @dest: string one
* @src: string two
* @n: the number of byte
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
