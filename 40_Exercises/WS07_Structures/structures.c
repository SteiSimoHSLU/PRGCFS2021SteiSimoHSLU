#include <stdio.h>

#define firstName_Length 20
#define lastName_Length 30
#define gradeCount 6
#define studentCount 5


struct student{
	char firstName[firstName_Length];
	char lastName[lastName_Length];
	float grades[gradeCount];
	float average;
};


int main(int argc, char *argv[])
{
	struct student studentArray[studentCount]={
		{.firstName = "Tony", .lastName = "Stark", .grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0}},
		{.firstName = "Peter", .lastName = "Parker", .grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2}},
		{.firstName = "Bruce", .lastName = "Banner", .grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5}},
		{.firstName = "Steve", .lastName = "Rodgers", .grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4}},
		{.firstName = "Natasha", .lastName = "Romanoff", .grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9}}
	};
	for (i = 0; i < studentCount; i++)
	{
		float sum=0;
		
		for (j=0; j<gradeCount; j++)
		{
		sum=sum+studentArray[i].grades[j];		
		
		}
		studentArray[i].average=sum/gradeCount;
	
	}





	return 0;
}

