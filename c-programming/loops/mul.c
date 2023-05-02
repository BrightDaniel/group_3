#include <stdio.h>

int main()
{
	int mul, end;

	printf("Enter num you want to multiply: ");
	scanf("%d", &mul);

	printf("Enter the num at which you want your multiplication table to end: ");
	scanf("%d", &end);

	for (int i = 1; i <= end; i++)
	{
		int store = mul * i;

		printf("%d * %d = %d \n", mul, i, store);
	}




}
