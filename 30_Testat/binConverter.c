#include <stdio.h>
#include <stdlib.h>


FILE *fptrInput;
FILE *fptrOutput;
	
struct oneLineBuffer
{
	long long timeStamp;
	int pressure;
	int inletValve;
	int outletValve;
	int pump1;
	int pump2;
	int pump3;
	int alarmstateNominal;
	int alarmstateWarning;
	int alarmstateSevere;

};



int main(int argc, char *argv[])
{	
	//initialize buffers
	struct oneLineBuffer buffer;
	char systemstateBuffer=0;
	char alarmstateBuffer=0;
	
	//write everything to console to analyse
	/*
		int c;	
		for (int i=0; i<100; i++)
			{
      			c=getc(fptrInput);
			printf("%d ", c);
   			}
	*/
	
	// Open input and output
	fptrInput=fopen("./pressureSpike.bin","rb");
	fptrOutput=fopen("./pressureSpike.csv","w");
	
	// Check valid input valid
	if (fptrInput == NULL){
		printf("Error when opening file\n");
		exit(1);
		}
	//testing
	/*
	int test1=0;
	int test2=0;
	int test3=0;
	int test4=0;
	int test5=0;
	int testNumber=13;
	test1=(testNumber&(1<<0))>>0;
	test2=(testNumber&(1<<1))>>1;
	test3=(testNumber&(1<<2))>>2;
	test4=(testNumber&(1<<3))>>3;
	test5=(testNumber&(1<<4))>>4;
	printf("%d, %d, %d, %d, %d\n", test1, test2, test3, test4, test5);
	*/
	while(!feof(fptrInput))
	{
		fread(&buffer.timeStamp, sizeof(long long), 1, fptrInput);
		fread(&buffer.pressure, sizeof(int), 1, fptrInput);
		fread(&systemstateBuffer, sizeof(char), 1, fptrInput);
		fread(&alarmstateBuffer, sizeof(char), 1, fptrInput);
		
		//divide systemstateBuffer into individual signals
		buffer.inletValve = (systemstateBuffer&(1))>>0;
		buffer.outletValve = (systemstateBuffer&(1<<1))>>1;
		buffer.pump1 = (systemstateBuffer&(1<<2))>>2;
		buffer.pump2 = (systemstateBuffer&(1<<3))>>3;
		buffer.pump3 = (systemstateBuffer&(1<<4))>>4;
		
		if (systemstateBuffer >31 )
			{
			printf("Warning! System state out of bounds: %d\n", systemstateBuffer);
			}
		
		//divide alarmstateBuffer into individual Signals
		if (alarmstateBuffer==0)
			{
			buffer.alarmstateNominal=1;
			buffer.alarmstateWarning=0;
			buffer.alarmstateSevere=0;
			}
		else if (alarmstateBuffer==1)
			{
			buffer.alarmstateNominal=0;
			buffer.alarmstateWarning=1;
			buffer.alarmstateSevere=0;
			}
		else if (alarmstateBuffer==2)
			{
			buffer.alarmstateNominal=0;
			buffer.alarmstateWarning=0;
			buffer.alarmstateSevere=1;
			}
		else 
			{
			printf("Warning! Alarm state out of bounds: %d\n", alarmstateBuffer);			
			}
			
		//testprint to check
		printf("Time: %lld Pressure: %d systemstate: %d Inlet: %d Outlet: %d Pump1: %d Pump2: %d Pump3: %d nominal: %d Warning: %d Severe: %d \n", buffer.timeStamp, buffer.pressure, systemstateBuffer, buffer.inletValve, buffer.outletValve, buffer.pump1, buffer.pump2, buffer.pump3, buffer.alarmstateNominal, buffer.alarmstateWarning, buffer.alarmstateSevere);
		
		
		fprintf(fptrOutput,"%lld;%d;%d;%d;%d;%d;%d;%d;%d;%d\n", buffer.timeStamp, buffer.pressure, buffer.inletValve, buffer.outletValve, buffer.pump1, buffer.pump2, buffer.pump3, buffer.alarmstateNominal, buffer.alarmstateWarning, buffer.alarmstateSevere);
	}
	fclose(fptrInput);
	fclose(fptrOutput);	
	
	
	return 0;
}

