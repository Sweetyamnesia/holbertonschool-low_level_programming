#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Computes the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Computes the difference between two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The difference (a - b)
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Computes the product of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product (a * b)
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Computes the quotient of two integers
 * @a: Dividend (numerator)
 * @b: Divisor (denominator)
 *
 * Return: The quotient (a / b)
 *         If b is 0, the program prints "Error" and exits with status 100
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers
 * @a: Dividend (numerator)
 * @b: Divisor (denominator)
 *
 * Return: The remainder (a % b)
 *         If b is 0, the program prints "Error" and exits with status 100
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
