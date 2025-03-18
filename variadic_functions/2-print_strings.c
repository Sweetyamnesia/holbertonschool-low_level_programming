#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function that prints strings, follow by a new line.
* @separator: the string to be print between numbers.
* @n: number of integers.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
const char *str;

va_start(ap, n);
if (separator == NULL)
return;
if (n == 0)
return;
printf("\n");

for (i = 0; i < n; i++)
{
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
str = va_arg(ap, const char*);
if (str == NULL)
{
printf("(nil)");
}
printf("%s", str);
}
va_end(ap);
printf("\n");
}
