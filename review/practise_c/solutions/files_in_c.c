#include <stdio.h>

int main()
{
	FILE *file1, *file2, *mergedFile;
	char ch;

	/* Open the first file */
	file1 = fopen("file1.txt", "r");
	if (file1 == NULL)
	{
		printf("Error! Cannot open file1.txt \n");
		return 1;
	}

	/* Open the second file */
	file1 = fopen("file2.txt", "r");
	if (file1 == NULL)
	{
		printf("Error! Cannot open file2.txt \n");
		return 1;
	}

	/* Open the merged file in a write mode*/
	mergedFile = fopen("merged.txt", "w");
	if (mergedFile == NULL)
	{
		printf("Error: Unable to create file \n");
		fclose(file1);
		fclose(file2);
		return 1;
	}


	/* copy the contents of first file to the merged file */
	while((ch = fgetc(file1)) != EOF)
	{
		fputc(ch, mergedFile);
	}


	/* copy the contents of second file to the merged file */
	while((ch = fgetc(file2)) != EOF)
	{
		fputc(ch, mergedFile);
	}


	//close all files
	fclose(file1);
	fclose(file2);
	fclose(mergedFile);

	printf("Files have been merged successfully. \n");



	return 0;
}
