#include "main.h"
/**
* _strstr - a function that locates a substring.
* @haystack: istring
* @needle: substring
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *t = haystack;
char *u = needle;

while (*t == *u && *u != '\0')
{
t++;
u++;
}

if (*u == '\0')
return (haystack);
}

return (0);
}
