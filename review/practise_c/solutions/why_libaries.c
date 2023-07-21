#include <stdio.h>


double square_root(double x)
{
	if (x == 0 || x == 1)
		return x;

	int i = 1, result = 1;

	while (result <= x)
	{
		i++;

		result = i * i;
	}

	return i - 1;
}



int main()
{
	double number;

	printf("Enter Number: ");
	scanf("%lf", &number);



	printf("%.2lf \n", square_root(number));

}
















