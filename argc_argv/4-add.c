#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* main - Function that adds positive numbers.
* @argc: The number of arguments.
* @argv: The vector of arguments.
* * Return: Always 0 (Success), 1 (Error).
*/

int main(int argc, char *argv[])
{
int sum;
int i = 0;
sum = atoi(argv[1]);
i = atoi(argv[2]);
for (i = 1; i < argc; i++)
{
if (i != argc)
{
printf("O\n");
}
else if (!isdigit(i))
{
printf("Error\n");
return (1);
}
else if (i > 0)
{
sum += i;
}
printf("%d\n", sum);
}
return (0);
}
