#include <stdio.h>

int main()
{
	for (int j = 0; j <= 5; j++)
	{
		for (int i = 1; i <= j; i++)
		{	
			for(int y = 0; y <= j; y++)
			{
				int k = (y + i);
				printf("%d ", k);
			}
		}
		printf("\n");
	}
	printf("\n");
}
