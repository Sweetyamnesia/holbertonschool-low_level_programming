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
	int i = 0;
	char *s, sep = 0;

	va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
		{
			if (sep)
				printf(", ");

			if (format[i] == 'c')
				printf("%c", (char) va_arg(list, int));
			else if (format[i] == 'i')
				printf("%d", va_arg(list, int));
			else if (format[i] == 'f')
				printf("%f", va_arg(list, double));
			else if (format[i] == 's')
			{
				s = va_arg(list, char *);
				printf("%s", s ? s : "(nil)");
			}

			sep = 1;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
