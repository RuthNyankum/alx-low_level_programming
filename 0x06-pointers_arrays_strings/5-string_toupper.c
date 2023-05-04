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
while (n[u] != '\0')
{
if (n[u] >= 'a' && n[u] <= 'z')
n[u] = n[u] - 32;
u++;
}
return (t);
}
