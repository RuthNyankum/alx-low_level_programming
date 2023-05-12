#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring.
* @s: initial segment
* @accept: byte
* Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int t = 0;
int u;

while (*s)
{
for (u = 0; accept[u]; u++)
{
if (*s == accept[u])
{
t++;
break;
}
else if (accept[u + 1] == '\0')
return (t);
}
s++;
}
return (t);
}
