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
int num;
float f;
const char *s;
char separator = 0;

va_start(list, format);

while (format && format[i])
{
	if (separator)
	{
	printf(", ");
	}

	if (s != NULL)
	{
	c = va_arg(list, int);
	printf("%c, ", c);
	num = va_arg(list, int);
	printf("%d, ", num);
	f = va_arg(list, double);
	printf("%f, ", f);
	s = va_arg(list, const char*);
	printf("%s", s);
	}
	separator = 1;
	i++;
}

printf("\n");
va_end(list);
}
