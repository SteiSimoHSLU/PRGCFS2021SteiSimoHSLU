/* system includes */
#include <stdio.h>


/* project includes */
#include "sortBubble.h"

void swap(int *a, int *b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}  
// bubble sort function
void bubbleSort(int array[], int n, int multiplier) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)   
		for (j = 0; j < n-i-1; j++)
			if ((array[j]*multiplier) > (array[j+1]*multiplier)) 
				swap(&array[j], &array[j+1]); 
}   


