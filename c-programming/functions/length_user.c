#include <stdio.h>

int length(char input[]); //Function prototype


int main()
{

		printf("The length of the string is %d \n", length("ABCDefghijklMn8474336673..y76cdyvyagshnasugtjnashgfvjksshy"));ZZi

	        return 0;
}


int length(char input[])
{
	//TODO
	
	int length = 0;

	for(int count = 0; input[count] != '\0'; count++)
		length++;

	return length;

}


