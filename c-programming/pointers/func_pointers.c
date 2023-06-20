#include <stdio.h>

void scores(int *score)
{
	printf("your score is %d \n", *score);	
}


int main()
{
	int score = 80;
	int *pScore = &score;

	//TODO
	
	scores(pScore);
}
