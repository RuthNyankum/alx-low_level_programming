#include "main.h"
#include <stdio.h>

/**
* rot13 - a function that encodes a string using rot13.
* @t: string
* Return: *t
*/

char *rot13(char *t)
{
int u;
int v;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (u = 0; s[u] != '\0'; u++)
{
for (v = 0; v < 52; v++)
{
if (t[u] == data1[v])
{
t[u] = datarot[v];
break;
}
}
}
return (t);
}
