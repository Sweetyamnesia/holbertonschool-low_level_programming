#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
* main - Entry point
* Description : The main function will be called without any parameters.
* int _abs - function that computes the absolute value of an integer.
*Return: Always 0 (Success)
*/

int _abs(int)
{
int x, y;
x = _abs(-10);
printf("Absolute of -10: %d\n", x);
y = abs(12);
printf("Absolute of 12: %d", y);
}
