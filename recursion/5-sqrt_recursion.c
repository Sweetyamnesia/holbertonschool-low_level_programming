#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _sqrt_recursion - Function that returns the natural square root of a number.
* @n: The number.
* Return: -1 if n don't have the natural square root.
*/

int _sqrt_recursion(int n)
{
int root = _sqrt_recursion(n - 1);
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else if (root * root == n)
{
return (root);
}
else
{
return (root + 1);
}
}
