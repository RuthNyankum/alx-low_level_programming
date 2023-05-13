#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - a program that prints the minimum number
* of coins to make change for an amount of money.
* @argc: arguments count
* @argv: arguments
* Return: 0 if true, 1 if false
*/

int main(int argc, char *argv[])
{
int snow, t, result;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

snow = atoi(argv[1]);
result = 0;

if (snow < 0)
{
printf("0\n");
return (0);
}

for (t = 0; t < 5 && snow >= 0; t++)
{
while (snow >= coins[t])
{
result++;
snow -= coins[t];
}
}

printf("%d\n", result);
return (0);
}
