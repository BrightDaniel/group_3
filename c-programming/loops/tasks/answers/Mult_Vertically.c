#include <stdio.h>

/**
 * main - Write a program in C to display the multiplication table vertically from 1 to n.
 * Write your answer in the file task1.c in a folder called answers.
 *
 **/

int main()
{
	int mul, j, i;
    
	printf("input the value of mul:  ");
	scanf("%d", &mul);

	for (i = 1; i <= mul; i++)
	{
		printf("Multiplication table of %d: \n", i);
		
		for (j = 1; j <= 12; j++)
		{
			printf("%d * %d = %d \n",i, j, i * j);
			

		}
		;
	}
	//printf("\n \n");
}
