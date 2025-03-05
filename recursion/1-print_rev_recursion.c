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
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
