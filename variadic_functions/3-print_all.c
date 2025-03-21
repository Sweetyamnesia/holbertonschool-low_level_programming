#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a given format.
 * @format: The format string containing type specifiers.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char c;
	int num;
	float f;
	const char *s;
	char sep = 0;

	va_start(list, format);
	while (format && format[i] != '\0')
	{
		if (sep)
			printf(", ");
		if (format[i] == 'c')
		{
			c = (char) va_arg(list, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(list, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			f = (float) va_arg(list, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(list, const char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}
		sep = 1;
		i++;
	}
	printf("\n");
	va_end(list);
}
