#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* _puts - function that prints a string.
* @str: the string to be printed.
**/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
