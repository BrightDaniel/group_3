#include <stdio.h>


int length(char input[]);


int main()
{
	char input[200];

	printf("Enter a string: ");
	scanf("%s", input);
	
	
	int string_length = length(input);


	printf("The length of a string is %d \n", string_length);
}


int length(char input[])
{
	int length = 0;

	for(int count = 0; input[count] != '\0'; count++)
		length++;

	return length;

}














