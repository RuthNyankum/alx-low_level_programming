#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - check
* @str: array string
* Return: 0
*/
int check_num(char *str)
{
unsigned int snow;

snow = 0;
while (snow < strlen(str))

{
if (!isdigit(str[snow))
{
return (0);
}

snow++;
}
return (1);
}

/**
* main - a program that adds positive numbers.
* @argc: arguments count
* @argv: arguments
* Return: 0
*/

int main(int argc, char *argv[])

{

int snow;
int str_to_int;
int sum = 0;

snow = 1;
while (snow < argc)
{
if (check_num(argv[snow))

{
str_to_int = atoi(argv[snow]);
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

snow++;
}

printf("%d\n", sum);

return (0);
}
