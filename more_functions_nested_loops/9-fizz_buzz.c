#include <stdio.h>

/**
* main - Entry point
* Description : The main function will be called without any parameters.
*Return: Always 0 (Success)
**/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
}
return (0);
}
