#include <stdio.h>

#define firstName_Length 20
#define lastName_Length 30
#define gradeCount 6
#define studentCount 5

//define struct
struct student
{
	char firstName[firstName_Length];
	char lastName[lastName_Length];
	float grades[gradeCount];
	float average;
};

int main(int argc, char *argv[])
{
	//populate struct
	struct student studentArray[studentCount]=
	{
		{.firstName = "Tony", .lastName = "Stark", .grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0}},
		{.firstName = "Peter", .lastName = "Parker", .grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2}},
		{.firstName = "Bruce", .lastName = "Banner", .grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5}},
		{.firstName = "Steve", .lastName = "Rodgers", .grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4}},
		{.firstName = "Natasha", .lastName = "Romanoff", .grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}}
	};
	
	//Print struct and calc averages
	float sumCollective=0;
	float averageCollective=0;

	for (int i = 0; i < studentCount; i++)
	{

		//calc individual averages
		float sumIndividual=0;
		for (int j = 0; j<gradeCount; j++)
		{
			sumIndividual = sumIndividual + studentArray[i].grades[j];		
		}
		studentArray[i].average=sumIndividual/gradeCount;
		printf(" %s %s has an average of %.2f\n",studentArray[i].firstName, studentArray[i].lastName, studentArray[i].average);
		sumCollective = sumCollective + sumIndividual;
	}
	averageCollective=sumCollective/studentCount/gradeCount;
	
	printf("Class average is %.2f\n", averageCollective);

	return 0;
}

