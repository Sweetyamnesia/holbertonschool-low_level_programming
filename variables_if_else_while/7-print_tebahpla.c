#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* main - Entry point
* Description : The main function will be called without any parameters.
*Return: Always 0 (Success)
*/

int main(void)

{
char str;
for (str = 'z'; str <= 'a'; str--)
{
putchar(str);
}
putchar('\n');
return (0);
}
