#include "main.h"
/**
* string_toupper - a function that changes all lowercase letters
* of a string to uppercase.
* @t: pointer
* Return: t
*/
char *string_toupper(char *t)
{
int u;

u = 0;
while (t[u] != '\0')
{
if (t[u] >= 'a' && t[u] <= 'z')
t[u] = t[u] - 32;
u++;
}
return (t);
}
