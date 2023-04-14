#include <stdio.h>

/**
 * main - Build a simple calculator in C.
 * Write your code in a folder called answers, in a file called calculator.
 * @a: first number initiated 
 * @b: second number initiated
 * Return: 0.
 */

int main()
{
	int a, b;
	char c;

	printf("Enter the numbers and the operators of your choice: ");
	scanf("%d %c %d", &a, &c, &b);

	if (c == '+')
	{
		printf("%d\n", a + b);
	}
	if (c == '-')
	{
		printf("%d\n", a - b);
	}
	if (c == '/')
	{
		printf("%d\n", a / b);
		printf("%d\n", a % b);
	}
	if (c == '*')
	{
		printf("%d\n", a * b);
	}
	
	return (0);
}
