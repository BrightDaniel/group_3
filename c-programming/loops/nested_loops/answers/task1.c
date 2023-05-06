#include <stdio.h>

int main()
	{	
		int h = 0;
		for (; h < 8; h++)
		{
		
			for (int i = 1; i <= 12; i++)
			{	
				int k = (h + 1);
				int j = (k * i);
				printf("%d * %d = %d, \n", k, i, j);
			
			}
				printf("\n");
			

		}
		printf("\n");
	
	}
