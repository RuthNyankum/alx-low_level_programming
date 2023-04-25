#include "main.h"

/**
* _isalpha - checks for alphabetic character.
* @t: the char to be checked
*
* Return: 1 for alphabetic char, 0 otherwise
*/

int _isalpha(int t)
{
if ((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z'))
return (1);
else
return (0);
}
