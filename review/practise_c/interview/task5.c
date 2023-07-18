#include <stdio.h>


int main()
{
	int cost_p, sell_p, amount;

	printf("Enter Cost price: \n");
	scanf("%d", &cost_p);
	printf("Enter The selling price: \n");
	scanf("%d", &sell_p);

	if (cost_p > sell_p)
	{
		amount = cost_p  - sell_p;
		printf("You made a loss of = %d\n", amount);
	}
	else  if (cost_p < sell_p)
	 {
		 amount = sell_p  - cost_p;
		 printf("You made a profit of = %d\n", amount);
	 }
	else
		printf("You made neither profit or loss\n");




}
