#include "main.h"
/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @s: string
* @accept: string
* Return: 0
*/
char *_strpbrk(char *s, char *accept)
{
int t;

while (*s)
{
for (t = 0; accept[t]; t++)
{
if (*s == accept[t])
return (s);
}
s++;
}

return ('\0');
}
