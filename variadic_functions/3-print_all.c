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
	if (format[i] == 'c' && format[i] == 'i')
	{
		c = va_arg(list, int);
		i = va_arg(list, int);
		f = va_arg(list, double);
		s = va_arg(list, const char*);
	}


	if (s == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%c, ", c);
	printf("%d, ", i);
	printf("%f, ", f);
	printf("%s", s);
	}
	i++;
}

printf("\n");
va_end(list);
}
