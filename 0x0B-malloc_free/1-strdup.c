#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - a function that returns a pointer
* to a newly allocated space in memory
* @str: char
* Return: 0
*/

char *_strdup(char *str)
{
char *v;
int t, u = 0;

if (str == NULL)
return (NULL);
t = 0;
while (str[t] != '\0')
t++;

v = malloc(sizeof(char) * (t + 1));

if (v == NULL)
return (NULL);

for (u = 0; str[u]; u++)
v[u] = str[u];

return (v);
}
