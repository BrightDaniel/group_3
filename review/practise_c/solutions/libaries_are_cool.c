#include <stdio.h>
#include <math.h>

int main()
{
	double number, sqaureroot;

	printf("Enter Number: ");
	scanf("%lf", &number);


	//fuction from the math.h to get the sqaureroot of the user input
	sqaureroot = sqrt(number);


	printf("The sqaureroot of %.2lf is %.2lf", number, sqaureroot);


	return 0;
}
