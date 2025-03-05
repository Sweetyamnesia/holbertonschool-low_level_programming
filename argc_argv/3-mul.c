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
int n1, n2;
for (n1 = 0; n1 < argc; n1++)
{
for (n2 = 0; n2 < argc; n2++)
{
if (argc != 2)
{
printf("Error /n");
return (1);
}
else if (argc >= 2)
{
printf(n1 * n2);
}
return (0);
}
}
}
