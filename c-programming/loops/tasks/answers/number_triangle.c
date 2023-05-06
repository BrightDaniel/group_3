#include <stdio.h>

/**
12345
123456
1234567
12345678
*/

int main()
{
	int i, j, count, diff;

	for(i=1; i<=8; i++) 
	{
		count = i;
		diff = 4;
		for(j=1; j<=i; j++) 
		{
			printf(" %d", count);
			count = count + diff;
			diff --;

	  	 }
		printf("\n");
	}
        return 0;
}
