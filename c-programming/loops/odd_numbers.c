#include <stdio.h>

int main()
{
	int a;
	int b;
	do	
	{
		printf("Input the first number of the range of numbers: ");
		scanf("%d", &a);

		printf("Input the second number of the range of numbers: ");
		scanf("%d", &b);

	}
	while (a < 1);

	for (a = a; a <= b; a++)

		if ((a % 2) != 0)
		printf("%d\n", a);
}
