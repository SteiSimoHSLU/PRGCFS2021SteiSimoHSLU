/* system includes */
#include <stdio.h>


/* project includes */
#include "sortInsertion.h"

void insertionSort(int array[], int n, int multiplier) 
{ 
	int i, element, j; 
	for (i = 1; i < n; i++) //nicht das erste, sondern das Zweite am Anfang
	{ 
		element = array[i]; // temp buffer
		j = i - 1; //element links
		// compare "element" to its neighbor to the left
		while (j >= 0 && (array[j]*multiplier > (element*multiplier)))  // compare elemet
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		}
 		array[j + 1] = element; 
	}	 
}


