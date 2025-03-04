#include "main.h"
#include <stdio.h>

/**
* print_chessboard - function that prints the chessboard.
* @a: the pointer to the array.
*/

void print_chessboard(char (*a)[8])
{
int i = 0;
int j = 0;
while (i < 8)
{
while (j < 8)
{
_putchar(a[i][j]);
j++;
}
printf("\n");
i++;
}
}
