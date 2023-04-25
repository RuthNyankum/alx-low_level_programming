#include "main.h"

/**
* _islower - checks for lowercase character
* Return: 1 if char is lowcase, otherwise 0.
* @t: The char to be checked
*/

int _islower(int t)
{
if (t >= 97 && t <= 122)
return (1);
else
return (0);
}
