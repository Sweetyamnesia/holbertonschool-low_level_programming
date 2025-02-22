#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
* print_sign - Determines the sign of an integer
* @n: The integer value to check
* Return: 1 for positive numbers, 0 for zero, -1 for negative numbers
**/

int print_sign(int n)
{
if (n > 0)
{
  printf("%s +\n", "");
return (1);
}
else if (n == 0)
{
  printf("%s 0\n", "");
return (0);
}
else
{
  printf("%s -\n", "");
return (-1);
}
}
