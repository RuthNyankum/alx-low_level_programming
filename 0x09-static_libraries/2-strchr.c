#include "main.h"
/**
*  _strchr - a function that locates a character in a string.
*  @s: string
*  @c: pointer
*  Return: 0
*/
char *_strchr(char *s, char c)
{
int t = 0;
for (; s[t] >= '\0'; t++)
{
if (s[t] == c)
return (&s[t]);
}
return (0);
}
