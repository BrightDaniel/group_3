#include <stdio.h>

int main() 
{
	int number;

	printf("Enter your  number: ");
	scanf("%d", &number);

	if (number % 4 == 0 && number % 13 == 0) 
	{
		printf("%d is divisible by 4 and 13\n", number);
       	}
       	else 
	{
		printf("%d is not divisible by 4 and 13\n", number);
	}

	return 0;
}

