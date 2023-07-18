#include <stdio.h>

int main()
{
	char input;

	printf("Enter input: ");
	scanf("%c", &input);

	if (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z')
		printf("%c is an alphabet\n", input);

	else if (input >= '0' && input <= '9')
		printf("%c is a digit\n", input);

	else
		printf("%c is a special character\n", input);
}

