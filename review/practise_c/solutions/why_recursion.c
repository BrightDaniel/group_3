#include <stdio.h>

void printEvenInRange(int current, int upperlimit);

int main()
{
	int lower, upper;

	printf("Enter the first number: ");
	scanf("%d", &lower);

	 printf("Enter the second number: ");
	 scanf("%d", &upper);


	 printf("Even numbers in the range of %d to %d are: ", lower, upper);

	 printEvenInRange(lower, upper);
	
}


void printEvenInRange(int current, int upperlimit)
{
	if (current > upperlimit)
		return;

	if (current % 2 == 0)
		printf("%d ", current);

	printEvenInRange(current + 1, upperlimit);
}
