#include <stdio.h>
#include <ctype.h>

int main()
{
	char input[100];
	printf("Enter a string: ");
	fgets(input,  sizeof(input), stdin);


	printf("Vowels here are: ");

	int i = 0;
       	char converted_input;
	int vowels = 0;

	while ((converted_input = tolower(input[i])) != '\0')
	{
		switch (converted_input)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("%c ", input[i]);
				vowels = 1;
				break;
		}
		i++;
	}

	if (!vowels)
		printf("No Vowels here");

	return 0;
}
