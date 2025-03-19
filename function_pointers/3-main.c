#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point of the calculator program.
* @argc: number of command-line arguments.
* @argv: array of strings containing arguments.
* Return: 0 on success, or an error code (98, 99 or 100).
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
