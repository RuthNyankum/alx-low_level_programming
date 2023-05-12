#include "main.h"

/**
* _strcpy - a function that copies the string
* @dest: value destination
* @src: value
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int t;
for (t = 0; src[t] != '\0'; t++)
{
dest[t] = src[t];
}
dest[t++] = '\0';
return (dest);
}
