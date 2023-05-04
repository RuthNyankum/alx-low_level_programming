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
int dlen = 0, t;
while (dest[dlen])
{
dlen++;
}

for (t = 0; src[t] != 0; t++)
{
dest[dlen] = src[t];
dlen++;
)
dest[dlen] = '\0';
}
