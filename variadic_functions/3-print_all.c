#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything.
* @format: list of types of arguments.
*/

void print_all(const char * const format, ...)
{
va_list list;
char c;
int i = 0;
float f;
const char *s;

va_start(list, format);

while (format[i])
{
	if (s == NULL)
	{
	printf("(nil)");
	}
	else
	{
	c = va_arg(list, int);
	printf("%c, ", c);
	i = va_arg(list, int);
	printf("%d, ", i);
	f = va_arg(list, double);
	printf("%f, ", f);
	s = va_arg(list, const char*);
	printf("%s", s);
	}
	i++;
}

printf("\n");
va_end(list);
}
