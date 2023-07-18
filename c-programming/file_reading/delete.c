#include <stdio.h>

int main()
{
	if(remove("text.txt") == 0)
		printf("That file was deleted successfuly \n");
	else
		printf("error deleting the file. \n");


}
