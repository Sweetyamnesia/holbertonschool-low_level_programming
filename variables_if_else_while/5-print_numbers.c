#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Description : The main function will be called without any parameters.
*Return: Always 0 (Success)
*/

int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
