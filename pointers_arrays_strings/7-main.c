#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.

int main(void)
{
char *str;
str = "0123456789";
puts_half(str);
return (0);
}
*/

/**
* main - check the code
*
* Return: Always 0.

int main(void)
{
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
char *ptr;
ptr = cap_string(str);
printf("%s", ptr);
printf("%s", str);
return (0);
}
*/

/**
* main - check the code for
* Return: Always 0.


int main(void)
{
char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
char *p;
p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}
*/

/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
char board[8][8] = {
{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
};
print_chessboard(board);
return (0);
}
