#include <stdio.h>

int main()
{
	int days, weeks, years;

	printf("Enter days: ");
	scanf("%d", &days);

	/*Calculate the number of years */
	years = days / 365;

	/* calculate number of weeks */
	weeks = (days % 365) / 7;

	/* calculate number of days */
	days = (days % 365) % 7;

	printf("%d Year(s), %d Week(s), %d day(s) \n", years, weeks, days);

	return 0;
}
