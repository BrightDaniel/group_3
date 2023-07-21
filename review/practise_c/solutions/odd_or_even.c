#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;

	printf("Enter number: ");

	if(scanf("%d", &num) != 1)
	{
		printf("Invalid input. Enter a number. \n");
		exit(1);
	}


	if(num % 2 == 0)
		printf("%d is even", num);
	else
		printf("%d is odd", num);

	return 0;
}
