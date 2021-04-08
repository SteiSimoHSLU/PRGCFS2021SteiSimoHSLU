#include <stdio.h>


//function
void ComputeCircleArea(float radius, float *area)
	{
	*area = radius*radius*3.14159;

	}
int main(int argc, char *argv[])
{
	float myRadius= 4.545;
	float area = 0;
	ComputeCircleArea(myRadius, &area);
	return 0;
}

