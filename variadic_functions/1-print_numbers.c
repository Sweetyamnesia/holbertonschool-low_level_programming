#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints numbers, follow by a new line.
* @separator: tstring to be print between numbers.
* @n: number of integers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
unsigned int number;

va_start(ap, n);
if (separator == NULL)
return;

if (n == 0)
printf("\n");
return;

for (i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
number = va_arg(ap, int);
printf("%d", number);
}
va_end(ap);
printf("\n");
}
