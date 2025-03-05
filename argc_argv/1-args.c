#include <stdlib.h>
#include <stdio.h>

/**
* main - Function that prints the number of arguments passed into it.
* @argc: The number of arguments.
* @argv: The vector of arguments.
* * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("argv [%d] = %s\n", i, argv[i]);
}
printf("\n");
return (0);
}
