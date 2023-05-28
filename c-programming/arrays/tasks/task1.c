#include <stdio.h>

void main()
{
	//DEclare arrays for name and scores
	char name[26];
	int scores[12];


	//get the user naem
	printf("Enter your name: ");
	scanf("%s", name);

	//get the users score for the past 12 months.
	 printf("Enter your scores for the past 12 months: \n");
	 for(int i = 0; i  <  12; i++)
	 {
		 printf("Enter Month %d scores: ", i+ 1); 
		 scanf("%d", &scores[i]);
	 }

	 
	 //Print out the name
	  printf("\nName: %s \n", name);

	 //Print out the score
	   printf("Scores for the past 12 months are as follows: ");
	   for (int i = 0; i < 12; i++)
	   {
		   printf("Scores For month %d is: %d \n", i+1, scores[i]);
	   }
}
