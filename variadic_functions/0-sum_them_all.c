#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameter.
* @n: the parameter.
* Return: 0 if the value of n is 0.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

va_start(ap, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, unsigned int);
va_end(ap);
}
return (sum);
}
