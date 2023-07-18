#include <stdio.h>

int main()
{
	FILE *kindness = fopen("hello.py", "a");
	
	if (kindness == NULL)
	{
		printf("Error opening file! ");
		return 1;
	}
	
	fprintf(kindness, "\nprint('Additional content')");

	fclose(kindness);
}
