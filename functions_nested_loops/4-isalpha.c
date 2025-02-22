#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
* _isalpha - Checks if the character is a letter, lowercase or uppercase.
* @c: The character to be checked.
*
* Return: 1 if c is lowercase, 0 otherwise.
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
