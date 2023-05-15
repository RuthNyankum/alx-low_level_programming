#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string
 * @s2: string
 * Return: concat of s1 and s2
 */


char *str_concat(char *s1, char *s2)
{
char *t;
int u, v, a, b;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (u = 0; s1[u] != '\0'; u++)
;
for (v = 0; s2[v] != '\0'; v++)
;

t = malloc((u * sizeof(*s1)) + (v * sizeof(*s2)) + 1);
if (t == NULL)
return (NULL);

for (a = 0, b = 0; a < (u + v + 1); a++)
{
if (a < u)
t[a] = s1[a];
else
t[a] = s2[b++];
}

return (t);
}
