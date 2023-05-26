#include <stdio.h>

/**
12345
123456
1234567
12345678
*/

int main()
{
	int i, j, num=1;

	for(i=1; i<=4; i++) 
	{
		for(j=1; j<=i; j++) 
		{
			printf(" %d", num);
			num++;

	  	 }
		printf("\n");
	}
        return 0;
}
