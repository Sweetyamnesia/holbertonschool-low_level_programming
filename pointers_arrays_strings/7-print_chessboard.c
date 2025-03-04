#include "main.h"
#include <stdio.h>

/**
* _print_chessboard - function that prints the chessboard.
* @a: the pointer to the array.
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%5d", a[i][j]);
}
printf("\n");
}
}
