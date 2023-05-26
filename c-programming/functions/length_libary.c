#include <stdio.h>
#include <string.h>

int main()
{
	char input[150];

	printf("Enter a string: ");
	scanf("%s", input);

	int length = strlen(input);

		printf("The length is %ld \n", length );
	        return 0;
}
