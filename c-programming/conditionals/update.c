#include <stdio.h>


/*	First change - Validate users entry of cohort number. not more than 13, and not less than 0. 
 *	Second change - Validate the scores. not more than 200 and not less than 0.
 *
 *
 *
 */


int main()
{
	int pro_score, monthly_score, cohort;

	char name[20], name2[20];


	printf("Your first name and last name only: ");
	scanf("%s %s", name, name2);


	printf("Your cohort number: ");
	scanf("%d", &cohort);


	if (cohort >= 1 && cohort < 14)
	{	

		if (cohort == 13)
		{
			printf("Your Probation Score: ");
			scanf("%d", &pro_score);

			
				if (pro_score < 80)
				{
					printf("Sorry %s , you have been kicked out \n", name);
				}
				else if (pro_score > 79 && pro_score < 200) 
					printf("Congratulations \n");
				else
				printf("Invalid \n");
		}

		else if (cohort != 13)
		{
			printf("Your monthly Score: ");
			scanf("%d", &monthly_score);


				
				if (monthly_score < 70)
				{
					printf("Sorry %s , you have been deffered to cohort %d to restart at the current month you left. \n", name, cohort + 1 );
				}
				else if (monthly_score > 69 && monthly_score < 200) 
					printf("Congratulations \n");

				else 
					printf("Invalid \n");

		}


	}
	else
		printf("Invalid cohort \n");

}
