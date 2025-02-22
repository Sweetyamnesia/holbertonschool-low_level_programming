#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
* _islower - Checks if the character is lowercase.
* @c: The character to be checked.
*
* Return: 1 if c is lowercase, 0 otherwise.
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
