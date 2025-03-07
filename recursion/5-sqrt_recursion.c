#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* sqrt_helper - Recursively checks for the natural square root.
* @n: The number to find the square root of.
* @i: The current divisor being tested.
*
* Return: The natural square root of n, or -1 if n does not have one.
*/

int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to find the square root of.
*
* Return: The natural square root of n, or -1 if n does not have one.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 1));
}
