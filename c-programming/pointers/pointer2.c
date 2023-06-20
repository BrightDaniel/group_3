#include <stdio.h>


int main()
{
	int score =70;
	int* pScore = NULL;

	pScore = &score;

	printf("Address of score %p\n", &score);
	printf("Adress of pScore %p \n", pScore);



	printf("Value of score %d \n", score);
	
	//deferncing of a pointer
	printf("Value stored at the address of pScore %d \n", *pScore);


	
}
