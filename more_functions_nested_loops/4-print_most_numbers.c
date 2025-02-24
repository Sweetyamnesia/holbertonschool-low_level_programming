#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_most_numbers - prints the numbers from 0 to 9.
**/

void print_most_numbers(void)
{
int n = 0;
for (n = 0; n <= 9; n++)
{
if (n != 2 && n != 4)
{
_putchar(48 + n);
}
}
_putchar('\n');
}
