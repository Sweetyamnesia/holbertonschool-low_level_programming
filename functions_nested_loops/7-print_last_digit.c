#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
* print_last_digit - Print the last digit of a number.
* @n: the number.
*/

int print_last_digit(int num)
{
int last_digit = num % 10;
printf("%d\n", last_digit);
return last_digit;
}

