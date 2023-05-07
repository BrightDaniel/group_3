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

	printf("Multiplication table from 1 to %d \n",mul);
	for (i = 1; i <= 10; i++)
	{
		
		for (j = 1; j <= mul; j++)
		{
			if(j <= mul - 1)
				printf("%d * %d = %d, ", j, i, i * j);
			else
				printf("%d * %d = %d", j, i, i * j);

		}

	}
	printf("\n");
}
