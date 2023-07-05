#include <stdio.h>

int main()
{
	int pro_score, monthly_score, cohort;

	char name[20], name2[20];


	printf("Your first name and last name only: ");
	scanf("%s %s", name, name2);


	printf("Your cohort number: ");
	scanf("%d", &cohort);

	if (cohort == 13)
	{
		        printf("Your Probation Score: ");
			scanf("%d", &pro_score);

			if (pro_score < 80)
			{
				printf("Sorry %s , you have been kicked out \n", name);
			}
			else 
				printf("Congratulations \n");
	}

	else 
		printf("Your monthly Score: ");
		scanf("%d", &monthly_score);

		if (monthly_score < 70)
		{
			printf("Sorry %s , you have been deffered to a pevious cohort \n", name);
		}
		 else 
			 printf("Congratulations \n");


	return 0;
}
