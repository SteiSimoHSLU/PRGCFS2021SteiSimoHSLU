/* system includes */
#include <stdio.h>


/* project includes */
#include "printArray.h"

void printArray(int array[], int n) { 
	int i; 
	for (i = 0; i < n; i++) 
	{
		printf("%d ", array[i]); 
	}
	printf("\n"); 
}  

