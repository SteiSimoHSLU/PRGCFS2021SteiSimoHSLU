#include <stdio.h>


#define ARRAY_LENGTH 6


//void printArray(int myArray[], int arrayLength ){ dasselbe!
void printArray(int *myArray, int arrayLength ) {
	for(int i =0; i <arrayLength; i++)
	{
		printf("%d\n", myArray[i]);
	}
	printf("finished. \n");

}


int main(int argc, char *argv[])
{
	
	int intarray[ARRAY_LENGTH]={0};
	
	//Print array
	printArray(intarray, ARRAY_LENGTH);
	
	//index abfüllen
	for ( int i = 0; i < ARRAY_LENGTH; i++){
		intarray[i]=i;	
	}
		//Print array again
	printArray(intarray, ARRAY_LENGTH);	


	return 0;
}

