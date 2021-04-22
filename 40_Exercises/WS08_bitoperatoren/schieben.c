#include <stdio.h>



int main(int argc, char *argv[])
{
	int numberChecker;
	float  myNumber;
	int direction;
	int stepsChecker;
	float stepCount;
	int finalnumber=0;
	char directionWord;
	
	//enter number
	printf("Enter whole number below 2^31: ");
	scanf("%f", &myNumber);
	numberChecker = myNumber;
	
	//check if number
	if (numberChecker == myNumber)
		{
		printf("your number is %d\n",numberChecker);
		
		//enter direction
		printf("Enter direction: 1 for left or 0 for right: ");
		scanf("%d", &direction);
		
		//check direction
		if ((direction == 0) || (direction == 1))
			{
			printf("your direction is %d\n", direction);
			
			//enter steps
			printf("Enter number of steps to move: ");
			scanf("%f", &stepCount);
			stepsChecker = stepCount;
			
			// check steps
			if (stepsChecker == stepCount)
				{
				printf("your stepcount is %d\n",stepsChecker);
				
				//do operation and make output
				if (direction == 1)
					{

					finalnumber = numberChecker<< stepsChecker;
					printf("Shifting %.0f by %.0f to the left equals %d \n ", myNumber, stepCount, finalnumber);
					}
				else if (direction == 0)
					{
					finalnumber = numberChecker >> stepsChecker;
					printf("Shifting %.0f by %.0f to the right equals %d ", myNumber, stepCount, finalnumber);
					}
				
				}
			else 
				printf("Not a number\n");
			}
			
		else
			printf("Input is not 0 or 1\n");
		}

		
	else 
		{
		printf("wrong input\n");
		}





	return 0;
}

