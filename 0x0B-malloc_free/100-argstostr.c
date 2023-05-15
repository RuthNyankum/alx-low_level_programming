#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program.
* @ac: arguments
* @av: argument variables
* Return: 0
*/

char *argstostr(int ac, char **av)
{
char *t;
int a, b, u, v;

if (ac == 0)
return (NULL);
if (av == 0)
return (NULL);

a = 0;
for (b = 0; b < ac; b++)
{
for (u = 0; av[b][u] != '\0'; u++)
a++;
a++;
}
a++;
t = malloc(a *sizeof(char));
if (t == 0)
return (NULL);

v = 0;
for (b = 0; b < ac; b++)
{
for (u = 0; av[b][u] != '\0'; u++)
{
t[v++] = av[b][u];
}
t[v++] = '\n';
}
t[v] = '\0';
return (t);
}
