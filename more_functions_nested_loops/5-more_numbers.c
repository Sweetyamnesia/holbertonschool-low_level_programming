#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* more_numbers - prints the numbers from 0 to 14.
**/

void more_numbers(void)
{
int n = 0;
for (n = 0; n <= 14; n++)
{
if (n / 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
_putchar('\n');
}
}
