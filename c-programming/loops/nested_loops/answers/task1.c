#include <stdio.h>

int main()
	{	
		int h = 1;
		for (; h <= 8; h++)
		{
		
			for (int i = 1; i <= 10; i++)
			{	
				//int k = (h + 1);
				//int j = (k * i);
				printf("%d*%d = %d,   ", i, h, i * h);
			
			}
				printf("\n");
			

		}
		printf("\n");
	
	}
