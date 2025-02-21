#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Entry point
* Description : The main function will be called without any parameters.
*Return: Always 0 (Success)
* _putchar - Prints a character to the standard output.
*/

int _putchar(char c)
{
int n = 0;
n = write(1, &c, 1);
return (n);
}

int main(void)
{
int m = 0;
m = _putchar('_');
m = _putchar('p');
m = _putchar('u');
m = _putchar('t');
m = _putchar('c');
m = _putchar('h');
m = _putchar('a');
m = _putchar('r');
m = _putchar('\n');
return (0);
}
