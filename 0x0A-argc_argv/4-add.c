#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - a program that adds positive numbers.
* @argc: argument count
* @argv: argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int t, u, addition = 0;

for (t = 1; t < argc; t++)
{
for (u = 0; argv[u][u] != '\0'; u++)
{
if (!isdigit(argv[t][u]))
{
printf("Error\n");
return (1);
}
}
addition += atoi(argv[t]);
}
printf("%d\n", addition);
return (0);
}
