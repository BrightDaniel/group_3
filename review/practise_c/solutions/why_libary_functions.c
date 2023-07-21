#include <stdio.h>
#include <string.h>


int main()
{
	char input[100];

	printf("Enter a string: ");
	scanf("%s", input);


	printf("The length of the string is: %ld \n", strlen(input));

	return 0;


}
