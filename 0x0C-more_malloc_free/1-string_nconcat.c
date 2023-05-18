#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string
* @s2: string
* @n: int
* Return: 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

int count, count1;
int sign = n;
char *t;
int snow1, snow2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (snow1 = 0; s1[snow1] != '\0'; snow1++)
;
for (snow2 = 0; s2[snow2] != '\0'; snow2++)
;

if (sign >= snow2)
{
sign = snow2;
t = malloc(sizeof(char) * (snow1 + snow2 + 1));
}
else
t = malloc(sizeof(char) * (snow1 + n + 1));
if (t == NULL)
return (NULL);
for (count = 0; count < snow1; count++)
{
t[count] = s1[count];
}
for (count1 = 0; count1 < sign; count1++)
{
t[count++] = s2[count1];
}
t[count++] = '\0';
return (t);
}
