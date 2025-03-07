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
int i = 1;
if (n < 0)
{
return (-1);
}
else if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
i++;
}
return (_sqrt_recursion(n));
}
