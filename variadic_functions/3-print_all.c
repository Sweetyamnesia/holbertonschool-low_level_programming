#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - function to print a character
 * @args: va_list of arguments
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);


}

/**
 * print_int - function to print an integer
 * @args: va_list of arguments
 */
void print_int(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float - function to print a float
 * @args: va_list of arguments
 */
void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string - function to print a string
 * @args: va_list of arguments
 */
void print_string(va_list args)
{
	const char *s = va_arg(args, const char*);

	if (s)

		printf("%s", s);
	else
		printf("(nil)");
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int first = 1;

	type_handler_t handlers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		int j = 0;

		while (handlers[j].type != 0)
		{
			if (handlers[j].type == format[i])
			{
				if (!first)
					printf(", ");
				handlers[j].print(list);
				first = 0;
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}
