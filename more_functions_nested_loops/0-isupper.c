#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isupper - this function test if letters are uppercase.
* @c: parameter to test.
* Return: return 1 if c is uppercase and 0 if it's not.
**/

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
