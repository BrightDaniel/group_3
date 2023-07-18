#include <stdio.h>

int main()
{
	FILE *pF = fopen("hello.py", "w");

	fprintf(pF, "print('Hello world')");

	fclose(pF);
}
