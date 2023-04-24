#include <stdio.h>

int main()
{
	int a, b;

	printf("Input even numbers from 0 up to: ");
	scanf("%d", &a);

	for (b = 2; b <=a; b+=2)
	{
//		if ((b % 2) == 0)
			printf("All even numbers for 0 are = %d \n", b);

	}

}
