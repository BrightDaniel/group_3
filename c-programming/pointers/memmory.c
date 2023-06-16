#include <stdio.h>

int main()
{
	// memorry
	//memmory block =  street number.
	//memmory adress = particular door.
	

	int a;
	int b	; 
	int c;

	printf("%ld bytes\n", sizeof(a));
	printf("%ld bytes\n", sizeof(b));
	printf("%ld bytes\n", sizeof(c));
	
	puts(""); puts("");
	
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &c);
	
}
