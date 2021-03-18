#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//falls NICHT 4 Argumente, dann Block 7-10
	if( argc != 4)
	{
		//input not valid
		printf("Usage:\n");
		printf("logicOperators Intput1 Input2 Input3\n");
	}
	else 
	{
		//input valid -> genau 1+drei Argumente erhalten
		int val1 = atoi(argv[1]);
		int val2 = atoi(argv[2]);		
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0f;
		
		printf("%d, %d, %d\n", val1, val2, val3);
		
		if( !(val1 > 0) || !(val2 > 0) || !(val3 > 0))
		{
			//fehlerfall
			printf("All input must be greater than zero\n");
		}
		else
		{	
			//find greatest
			if ( val1 >= val2 && val1 >=val3)
			{
				//val1 
				printf("%d is the greatest\n", val1);
			}
			else if  (val2 >= val1 && val2 >=val3)
			{
				//val 
				printf("%d is the greatest\n", val2);
			}
			else
			{
				printf("%d is the greatest\n", val3);	
			}
			
			//find smallest
			if ( val1 <= val2 && val1 <=val3)
			{
				//val1 
				printf("%d is the smallest\n", val1);
			}
			else if  (val2 <= val1 && val2 <=val3)
			{
				//val 
				printf("%d is the smallest\n", val2);
			}
			else
			{
				printf("%d is the smallest\n", val3);	
			}
			
			//sum
			sum = (val1+val2+val3);
			printf("the sum is: %d\n", sum );
			
			//avg
			average= sum/3.0;
			printf("the average is: %.2f\n", average );
		}

			
	}
		
#if 0 		// auskommentierem mit Präprozessor		
		
		printf("Number of input arguments: %d\n", argc ); // Anzahl args printen
		
		for(int i = 0; i < argc; i++) 
		//nimm int i, starte mit 0, dann mach
		//führe folgendes aus, solange i < argc
		//inkrementiere i bei jedem Durchgang um 1 (++)
		// 1++ zuerst ausführen, dann inkrementieren
		//++1 zuerst inkrementieren, dann ausführen

		{
			printf("Argument %d was %s\n", i, argv[i]);
			// argv:	- ./logicOperators
			//		- erste Zahl
			//		- zweite Zahl
		}
	}
#endif	
	return 0;
}
