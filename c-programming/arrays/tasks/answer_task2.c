#include <stdio.h>

const int NUM_STUDENTS = 1;

const int NUM_SUBJECTS = 9;

int main()
{
	float studentScores[NUM_STUDENTS][NUM_SUBJECTS];

	float averages[NUM_STUDENTS];

	char grades[NUM_STUDENTS];

	const char* subjects[] = { "Maths", "English", "Biology", "Computer science", "Government", "Pyhsics", "Chemistry", "Social studies", "Accounting"};


	//Input scores for each student
	for(int i = 0; i < NUM_STUDENTS; i++)
	{
		printf("Enter scores for student %d: \n", i+1);

		for (int j = 0; j < NUM_SUBJECTS; j++)
		{
			printf("Enter score for %s: ", subjects[j]);
			scanf("%f", &studentScores[i][j]);
		}	

		printf("\n");

	}

	//GRADE THE STUDENTS
	for (int i = 0; i  < NUM_STUDENTS; i++)
	{	
		float sum = 0.00;

		for (int j = 0; j < NUM_SUBJECTS; j++)
		{
			sum += studentScores[i][j];
		}

		averages[i] = sum / NUM_SUBJECTS;

		if (averages[i] >= 85 && averages[i] < 100)
		{
			grades[i] = 'A';
		}
		else if (averages[i] >= 70 && averages[i] < 84)
		{
			grades[i] = 'B';
		}
		else if (averages[i] >= 51 && averages[i] <  70)
		{
			grades[i] = 'C';
		}

		else if (averages[i] >= 41 && averages[i] < 50)
		{
			grades[i] = 'D';
		}
		else if (averages[i] >= 30 && averages[i] < 40)
		{
			grades[i] = 'E';
		}
		else {
			grades[i] = 'F';
		}


	}

	// Print the average score, and the grade
	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		printf("Student %d:\n", i + 1);

		for (int j = 0; j < NUM_SUBJECTS; j++)
		{
			printf("%s: %.2f \n", subjects[j], studentScores[i][j]);
		}

		printf("Average Score: %.2f, \n Grade: %c \n", averages[i], grades[i]);

		printf("\n");

	}

	return 0;

}


