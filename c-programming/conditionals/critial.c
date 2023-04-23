#include <stdio.h>

int main()
{	
	int age; char name[20], name2[20], email[50];

	printf("Your first name and last name only: ");
	scanf("%s %s", name, name2);

	printf("Your Email address: ");
	scanf("%s", email);

	printf("Your Age: ");
	scanf("%d", &age);


	if (age < 18)
	{
		printf("Not yet Qualified: \n");
	}
	else if (age == 18)
	{
		char confirm;

		printf("Are you in school? Type Y for yes and N for no: ");
		scanf(" %c", &confirm);

		if (confirm == 'Y' || confirm == 'y')
		{
			printf("Not qualified for now, finish your studies \n");
		} 

		else if (confirm == 'N' || confirm == 'n')
		{
			printf("Qualified \n");
		}    
		else 
			printf("not recognised\n");
	} 

	else if (age > 18 && age < 40)
	{
		printf("Qualified \n");
	}
	else 
		printf("Retired \n");



}
