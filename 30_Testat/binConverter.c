#include <stdio.h>
#include <stdlib.h>


FILE *fptrInput;
FILE *fptrOgccutput;
	
struct oneLine
{
   long long timeStamp;
   int pressure;
   char systemState;
   char alarmState;
};

struct oneLine allData[10];

int main(int argc, char *argv[])
{
	// READ
	fptrInput=fopen("./pressureSpike.bin","rb");
	// Check if valid
	if (fptrInput == NULL){
		printf("Error when opening file\n");

		// Program exits if the file pointer returns NULL.
		exit(1);
		}
	//console output
	char buff[255];
	for (int i=0; i<100; i++)
		{
			int a=0;
			int b=0;
			int c=0;
			int d=0;
			
			//read long long, 64 bit
			fgets(buff, 255, fptrInput);
			a = (int) buff;
			printf("%d\n", a );
			/*
			//read long long 24 bit
			fscanf(fptrInput, "%s", buff);
			b = (int) buff;
			printf("b%d ", a );
			//read long long 8 bit
			fscanf(fptrInput, "%s", buff);
			c = (int) buff;
			printf("c%d ", a );
			//read long long 8 bit
			fscanf(fptrInput, "%s", buff);
			d = (int) buff;
			printf("d%d\n", a );
			*/
		
		}
	
	
	return 0;
}

