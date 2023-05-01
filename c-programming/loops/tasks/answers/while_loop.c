#include <stdio.h>

int main()
{
	int a, b = 1,  sum = 0;

	printf("Sum: ");
	scanf("%d", &a);

	while ( b <= a)
	{
		sum += b;
		b++;
	}
	printf("The sum is: %d", sum);
	puts("");
}
