#include <stdlib.h>
#include <stdio.h>

/**
* main - Function that prints all arguments.
* @argc: The number of arguments.
* @argv: The vector of arguments.
* * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s \n", argv[i]);
}
return (0);
printf("\n");
}

