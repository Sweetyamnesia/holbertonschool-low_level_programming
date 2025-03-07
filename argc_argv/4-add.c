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
int sum = 0;
int i;
int j = 0;
for (i = 1; i < argc; i++)
{
while (argv[i][j])
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
