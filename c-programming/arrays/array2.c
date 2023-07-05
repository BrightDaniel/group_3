#include <stdio.h>

int main()
{
	double prices[] = {5.0, 10.0};


	int size =  sizeof(prices)/sizeof(prices[0]);


	for (int i = 0; i < size; i++)
	{
		printf("%.2lf \n", prices[i]);
	}






}
