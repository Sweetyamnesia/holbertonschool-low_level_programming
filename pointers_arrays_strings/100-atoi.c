#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: the input string.
* Return: 0 if the input string is not a valid string's number.
**/

int _atoi(char *s)
{
int sign = 1;
int num = 0;
int found_digit = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s == '+')
sign *= 1;
else if (*s >= '0' && *s <= '9')
{
found_digit = 1;
num = num * 10 + (*s - '0');
}
else if (found_digit)
break;
s++;
}
return (num *sign);
}
