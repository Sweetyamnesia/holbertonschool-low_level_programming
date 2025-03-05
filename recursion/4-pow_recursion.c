#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _pow_recursion - Function that returns the value of x ^ y.
* @x: The first number.
* @y: The second number
* Return: -1 if y is lower than 0.
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}

