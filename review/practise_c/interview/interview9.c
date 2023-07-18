#include<stdio.h>
int main()
{
	int i;
	if(scanf("%d",&i)) //if we give input as 0
		printf("inside if block");
	else
		printf("inside else block");
	return 0;
}
