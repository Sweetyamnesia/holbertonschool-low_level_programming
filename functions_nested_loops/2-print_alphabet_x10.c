#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet_x10 - use to print alphabet 10 times
* Description: The main function will be called without any parameters.
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int n = 0;
char ch;
for (n = 0; n < 9; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
