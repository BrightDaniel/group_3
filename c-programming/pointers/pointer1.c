#include <stdio.h>


int main()
{
	//Pointer is a variable that holds memmory address.
	
	int score = 80;

	//create a pointer var
	int *pScore = &score;

	printf("address of score %p\n", &score);

	printf("address of pScore %p\n", pScore);
}
