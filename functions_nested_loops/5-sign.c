#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
* print_sign - Determines the sign of an integer.
* @n: The integer value to check.
* Return: 1 and prints '+' if n is greater than zero,
* 0 and prints '0' if n is zero,
* -1 and prints '-' if n is less than zero.
*/

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
