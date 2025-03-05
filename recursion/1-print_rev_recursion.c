#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Prints a string in reverse.
* @s: The string to print.
*
* Return: Nothing (void function).
*/

void _print_rev_recursion(char *s)
{
int length;
length = 0;
if (*s != '\0')
{
length++;
s++;
}
length--;
if (length >= 0)
{
length--;
s--;
_putchar(*s);
}
_putchar('\n');
}
