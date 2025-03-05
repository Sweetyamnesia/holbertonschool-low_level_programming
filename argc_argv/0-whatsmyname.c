#include <stdlib.h>
#include <stdio.h>

/**
* main - Function that prints the name of the file.
* @argc: The number of things entered in a command line.
* @argv: The array which hold the things that we enter in a command line.
* Return : 0 on a success, 1 on a failure.
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
printf("\n");
return (0);
}
