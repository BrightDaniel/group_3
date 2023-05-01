#include <stdio.h>

int main()
{
	int mul = printf("Enter the number you want to multiply: ");
	scanf("%d", &mul);

	int end = printf("Enter the end number: ");
	scanf("%d", &end);

	for (int i = 1; i <= end; i++)
	{
		int x = mul * i;

		printf("%d * %d = %d\n", mul, i, x);
}	}
	
