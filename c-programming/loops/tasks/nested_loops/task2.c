#include <stdio.h>

int main()
{
	int a, b = 1, sum = 0;

	/*Use int a, to ask for, and store user input*/
	printf("Enter the num: ");
	scanf("%d", &a);

	/* use int b to loop through all the numbers from 1 to a */
	for(; b <=a; b++)
	{
		/* use the sum to perform addition on each loop */
		sum = sum + b; 

		printf("show working: %d + %d is %d \n", a, b, sum);
	}
	printf("sum is = %d \n", sum);

}
