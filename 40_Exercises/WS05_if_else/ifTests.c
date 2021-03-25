#include <stdio.h>

int main(int argc, char *argv[])
{
	//Teilbar durch 19
	for(int i=1; i<500; i++)
	{
		if ( i%19 == 0)
		{
			printf("%d\n", i);		
		}	
	}
	//vielfache von 7, 11, 17
	for(int i=1; i<200; i++)
	{
		if ( i%7 == 0 && i%11==0)
		{
			printf("7 and 11: %d\n", i);		
		}
		if ( i%17 == 0 )
		{
			printf("17: %d\n", i);		
		}	
	}
	//vielfache von 11 (und dann auch 7)
	for(int i=1; i<200; i++)
	{
		if ( i%11==0)
		{
			if (i%7==0)
			{
			printf("11 and 7: %d\n", i);
			}	
			else
			{
			printf("11 but not 7: %d\n", i);
			}
		}
			
	}


	return 0;
}

