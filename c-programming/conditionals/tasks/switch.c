#include <stdio.h>

int main()
{
	int day;

	printf("Enter the number of the day: ");
	scanf("%d", &day);

	switch(day)
	{
		case 1:
			printf("Sunday\n");
			printf("weekend\n");
			break;

		 case 2:
                        printf("Monday\n");
                        printf("weekday\n");
                        break;
			
		 case 3:
                        printf("Tuesday\n");
                        printf("weekday\n");
                        break;
			
		 case 4:
                        printf("Wednesday\n");
                        printf("weekday\n");
                        break;

		 case 5:
                        printf("Thursday\n");
                        printf("weekday\n");
                        break;

		 case 6:
                        printf("Friday\n");
                        printf("weekday\n");
                        break;

		 case 7:
                        printf("Saturday\n");
                        printf("weekend\n");
                        break;

		default:
			printf("Input number 1 to 7 to get valid day type\n");
			
	}
	return 0;
}
