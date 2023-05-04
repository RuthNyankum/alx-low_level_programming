#include "main.h"
/**
* leet - a function that encodes a string into 1337.
* @t: input value
* Return: t value
*/
char *leet(char *t)
{
int u, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (u = 0; t[u] != '\0'; u++)
{
for (v = 0; v < 10; v++)
{
if (t[u] == s1[v])
{
n[u] = s2[v];
}
}
}
return (t);
}
