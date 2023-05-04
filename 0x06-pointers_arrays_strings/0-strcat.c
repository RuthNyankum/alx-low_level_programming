#include "main.h"
#include <stdio.h>

/**
* _strcat -  a function that concatenates two strings.
* @dest: string one
* @src: string two
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{

int t;
int u;

t = 0;
while (dest[t] != '\0')
{
t++;
}
u = 0;
while (src[u] != '\0')
{
dest[t] = src[u];
t++;
u++;
}

dest[t] = '\0';
return (dest);
}
