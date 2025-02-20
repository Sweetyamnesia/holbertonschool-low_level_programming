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
int n;
for (n = '0'; n < '9'; n++)
{
putchar(n);
}
for (n = '0'; n < '9'; n++)
{
putchar(',');
}
for (n = '0'; n < '9'; n++)
{
putchar(' ');
}
{
putchar('\n');
}
return (0);
}
