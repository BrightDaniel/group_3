#include<stdio.h>
int main()
{
	if(sizeof('\0')) 
		printf("inside if block");
	else
		printf("inside else block");
	return 0;
}
