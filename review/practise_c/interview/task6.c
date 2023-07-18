#include <stdio.h>
/**
 *  * main - A program to input marks of 5 subjects
 *   * and calculate their percentage and grade
 *    * Author: Omena Egbusiri
 *     */
int main(void)
{
	int P, Ch, B, M, C;
	int sum = ((P) + (Ch) + (B) + (M) + (C));
	int n = 5;
	int avg = (sum / n);
	int per = (avg * 100);

	printf("Kindly enter your score in Physics\n");
	scanf(" %d", &P);
	printf("Kindly enter your score in Chemistry\n");
	scanf(" %d", &Ch);
	printf("Kindly enter your score in Biology\n");
	scanf(" %d", &B);
	printf("Kindly enter your score in Mathematics\n");
	scanf(" %d", &M);
	printf("Kindly enter your score in Computer\n");
	scanf(" %d", &C);

	if (per >= 90)
		printf(" %d, Your Grade is 'A'\n", per);
	else if (per >= 80)
		printf(" %d, Your Grade is 'B'\n", per);
	else if (per >= 70)
		printf(" %d, Your Grade is 'C'\n", per);
	else if (per >= 60)
		printf(" %d, Your Grade is 'D'\n", per);
	else if (per >= 40)
		printf(" %d, Your Grade is 'E'\n", per);
	else if (per < 40)
		printf(" %d, Your Grade is 'F'\n", per);
}
