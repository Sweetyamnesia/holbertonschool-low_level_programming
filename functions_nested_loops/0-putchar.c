#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Entry point
* Description : The main function will be called without any parameters.
*Return: Always 0 (Success)
*/

int main(void)
{
const char *str = "_putchar";
while (*str)
{
putchar(*str++);
}
putchar('\n');
return (0);
}
