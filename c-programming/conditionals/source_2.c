#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	a = n % 10; //Code to get last digit of a number. A stores the last digit of n.

	printf("Last digit of %d is %d ", n, a);

	if ( a > 5)
		printf("and is greater than 5 \n");

	if ( a == 0)
		printf("and is 0 \n");

	if (a < 6 && a != 0)
		printf("and is less than 6 and not 0 \n");

	return (0);
}
