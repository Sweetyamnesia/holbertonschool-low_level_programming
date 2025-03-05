#include <stdlib.h>
#include <stdio.h>

/**
* main - Function that prints all arguments.
* @argc: The number of arguments.
* @argv: The vector of arguments.
* * Return: Always 0 (Success), 1 (Error).
*/

int main(int argc, char *argv[])
{
int num1, num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}

