#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet - use to print alphabet
* Description: The main function will be called without any parameters.
*Return: Always 0 (Success)
*/

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
