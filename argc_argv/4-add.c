#include <stdlib.h>
#include <stdio.h>

/**
* main - Function that adds positive numbers.
* @argc: The number of arguments.
* @argv: The vector of arguments.
* * Return: Always 0 (Success), 1 (Error).
*/

int main(int argc, char *argv[])
{
int sum = 0;
int i = 0;
int num = atoi(argv[i]);
for (i = 1; i < argc; i++)
{
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}


