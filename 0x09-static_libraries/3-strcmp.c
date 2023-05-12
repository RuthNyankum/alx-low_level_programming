#include "main.h"
/**
* _strcmp - a function that compares two strings.
* @s1: string one
* @s2: string two
* Return: comparison
*/

int _strcmp(char *s1, char *s2)
{
int t;

t = 0;
while (s1[t] != '\0' && s2[t] != '\0')
{
if (s1[t] != s2[t])
{
return (s1[t] - s2[t]);
}
t++;
}
return (0);
}
