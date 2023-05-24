#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the opcodes of I
* ts own main function.
* @argc: arguments
* @argv: array of arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
int bytes, t;
char *u;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

u = (char *)main;

for (t = 0; t < bytes; t++)
{
if (t == bytes - 1)
{
printf("%02hhx\n", u[t]);
break;
}
printf("%02hhx ", u[t]);
}
return (0);
}
