#include <stdio.h>
#include "main.h"

/**
* main - a program that multiplies two numbers.
* @argc: argument count
* @argv: argument
* Return: 0 if true, 1 if false
*/

int main(int argc, char *argv[])
{
int t, u;
if (argc == 3)
{
t = atoi(argv[1]);
u = atoi(argv[2]);
printf("%d\n", t *u);
return (0);
}
printf("Error\n");
return (1);
}
