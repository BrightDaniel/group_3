#include <stdio.h>

void fun(int a)
{
	printf("Value of a is %d \n", a);
}


int main()
{
	void (*pFun)(int) = &fun;

	(*pFun)(30);

	return 0;
}
