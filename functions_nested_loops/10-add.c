#include <stdio.h>

/**
* add - Computes the sum of two integers.
* @a: The first integer to be added.
* @b: The second integer to be added.
*
* Return: The sum of the two integers.
**/

int add(int a, int b);

/**
* main - Entry point of the program.
*
* This function prompts the user to enter two integers, calls
* the add function to calculate their sum, and displays the result.
*
* Return: Always returns 0 (Success).
**/

int main(void)
{
int num1, num2, sum;
printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
sum = add(num1, num2);
printf("The sum of %d and %d is %d\n", num1, num2, sum);
return (0);
}

/**
* add - Computes the sum of two integers.
* @a: The first integer to be added.
* @b: The second integer to be added.
* Return: The sum of the two integers.
**/

int add(int a, int b)
{
return (a + b);
}
