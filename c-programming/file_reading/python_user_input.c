#include <stdio.h>

int main()
{
	FILE *python = fopen("/home/bwave/group_5/c-programming/recursion/tasks/week.py", "w");

	fprintf(python, "week = int(input('What week are you: ')) \n if week == 10: print('You are almost done with C basics. Hurray')");

	fclose(python);
}
