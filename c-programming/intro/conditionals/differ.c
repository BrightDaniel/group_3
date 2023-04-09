#include <stdio.h>

int main()
{
	int cohort, prob_score, month_score;
	char Name1 [25], Name2 [25];

	printf("your first name and last name:");
	scanf("%s %s", Name1, Name2);

	printf("Your cohort:");
	scanf("%d", &cohort);
		
		if (cohort == 13)
	{
		printf("Your probation score:");
		scanf("%d", &prob_score);
		
		if (prob_score < 80)
	{
		printf("Sorry %s, you have been kickedout \n", Name1);
	}
	else
		printf("Congratulation \n");
	}
	else
	{
		printf("Your monthly score:");
		scanf("%d", &month_score);
			
			if (month_score < 70)
	{
		printf("Sorry %s, you have been deffered to the previous cohort \n", Name1);
	}
	else
		printf("Congratulation \n");
	}
		return(0);
}
