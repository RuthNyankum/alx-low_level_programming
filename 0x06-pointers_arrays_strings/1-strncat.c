#include "main.h"

/**
* _strncat - a function that concatenates two strings.
* @dest: string one
* @src: string two
* @n: the number of byte
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int t;
int u;

t = 0;
while (dest[t] != '\0')
{
t++;
}
u = 0;
while (u < n && src[u] != '\0')
{
dest[t] = src[u];
t++;
u++;
}
dest[t] = '\0';
return (dest);
}
