#include <stdio.h>

int main()
{
	int score = 80;

	int book = score;

	printf("%d \n", book);
	printf("%d \n", score);
	
	puts("");

	printf("%p \n", &book);
	printf("%p \n", &score);

}
