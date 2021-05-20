#include "sortInsertion.h"
#include "sortBubble.h"
#include "printArray.h"
#include "stdio.h"

int main() 
{
	int ascending;
	int multiplier;
	printf("Enter 1 for ascending, 0 for descending ");
   	scanf("%d", &ascending);
	if (ascending==1)
	{
		multiplier=1;
	}
	else
	{
		multiplier=-1;
	}
	int array[] = { 122, 17, 93, 3, 56, -5, -378, 65, 37, 37 }; 
	int n = sizeof(array) / sizeof(array[0]); 
	printf("unsorted: ");
	printArray(array, n);
	//insertionSort(array, n, multiplier); 
	bubbleSort(array, n, multiplier); 
	printf("sorted: ");
	printArray(array, n); 
	return 0; 
}

