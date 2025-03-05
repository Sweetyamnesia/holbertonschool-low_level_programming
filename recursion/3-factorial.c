#include "main.h"
#include <stdio.h>

/**
* factorial - Computes the factorial of a given number.
* @n: The number to compute the factorial for.
* Return: The factorial of n if n is positive or -1 if n is negative.
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
