#include <stdio.h>
int main()
{
	int a;
       	int b;
	do
	{

	printf("Display even numbers ranging between 0 and ");
	scanf("%d", &b);
	}
	while (b <= 0);

	for(a = 2; a <= b; a++)
	{
		if ((a % 2) == 0)
			printf("%d\n", a);
	
	}
}
