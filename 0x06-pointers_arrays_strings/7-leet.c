#include "main.h"
/**
* leet - a function that encodes a string into 1337.
* @t: input
* Return: t
*/
char *leet(char *t)
{
int u, v;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (u = 0; t[u] != '\0'; u++)
{
for (v = 0; v < 10; v++)
{
if (t[u] == s1[v])
{
t[u] = s2[v];
}
}
}
return (t);
}
