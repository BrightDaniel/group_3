#include <stdio.h>

int main()
	{	
		int y = 0;
		for (; y < 8; y++)
		{
		
			for (int i = 1; i <= 12; i++)
			{	
				int k = (y + 1);
				int j = (k * i);
				printf("%d * %d = %d, \n", k, i, j);
			
			}
				printf("\n");
			

		}
		printf("\n");
	
	}
