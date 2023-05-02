#include "main.h"

/**
* rev_string - a function that reverses a string.
* @s: reverse string
* Return: 0
*/

void rev_string(char *s)
{
int t, u;
char temp;

t = 0;
u = 0;

while (s[u] != '\0')
u++;

u--;

while (t < u)
{
temp = s[t];
s[t] = s[u];
s[u] = temp;
t++;
u--;
}
}
