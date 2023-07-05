#include <stdio.h>

/* Define and write out a function that gives us tthe sqaure root of a number
 *  *
 *   */

double square_root(double x)
{
	if (x == 0 || x == 1)
		return x;

	int i = 1, result = 1;


	while (result <= x)
	{
		i++;

		result = i * i;
	}

	return i - 1;
}



int main()
{
	double number;

	printf("Enter a number to get the sqaure root: ");
	scanf("%lf", &number);


	printf("%.2lf\n", square_root(number));

	return 0;
}



