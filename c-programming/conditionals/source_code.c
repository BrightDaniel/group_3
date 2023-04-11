#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - We want to learn if else
 *	@author - Bwave
 *	@betty - betty has problems
 *
 * Return: 0
 */

int main(void)
{
	int n;

	/*
	 * srand(time(0));
	 * n = rand() - RAND_MAX / 2;
	 */

	printf("Enter any number: ");
	scanf("%d", &n);

	if (n > 0)
		printf("%d is positive \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else
		printf("%d is negative \n", n);


	return (0);
}
