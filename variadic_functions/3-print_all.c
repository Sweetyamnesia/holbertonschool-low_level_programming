#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything.
* @format: list of types of arguments.
*/

void print_all(const char * const format, ...)
{
va_list ap;
int i = 0;
char *str;
char *separator;

va_start(ap, format);
while (format[i] != 0)
{
i++;
}
if (i > 0 && str != NULL)
{
printf("%s", str);
}
str = va_arg(ap, const char*);
va_arg(ap, int);
va_arg(ap, double);
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
printf("%c", str);
printf("%d", i);
}
va_end(ap);
printf("\n");
}
