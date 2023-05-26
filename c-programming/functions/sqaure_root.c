#include <stdio.h>
#include <math.h>

int main()
{
	double number, squareroot;

	printf("Enter a number: ");
	scanf("%lf", &number);

	squareroot = sqrt(number);

	printf("The sqaureroot of %.2lf is %.2lf", number, squareroot);

	return 0;
}
