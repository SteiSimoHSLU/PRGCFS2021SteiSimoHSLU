#include <stdio.h>


//function
//byreference
void ComputeCircleAreabyReference(float radius, float *area)
	{
	*area = radius*radius*3.14159;

	}
//pass by value
float ComputeCircleAreabyValue(float radius)
	{
	int area = radius*radius*3.14159;

	return area;
	}
	
int main(int argc, char *argv[])
{
	float myRadius= 4.545;
	float area = 0;
	ComputeCircleAreabyReference(myRadius, &area); //myRadius ist pass by value
	return 0;
}

