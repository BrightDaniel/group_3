#include <stdio.h>



int main()
{
	int num;

	printf("Input a number to check if it's divisible by 4 and 13\n");
	scanf("%d", &num);

	if (num % 4 == 0 && num % 13 == 0)
	{
		printf("%d is divisible by both 4 and 13\n", num);
	}
	else 
		printf("%d not divisible by 4 and 13\n", num);


}
