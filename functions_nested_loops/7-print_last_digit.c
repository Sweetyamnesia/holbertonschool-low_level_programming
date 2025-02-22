#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
* print_last_digit - Print the last digit of a number.
* @num: the number.
* Return: Value of the last digit of number
*/

int print_last_digit(int num)
{
int last_digit = num % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}

