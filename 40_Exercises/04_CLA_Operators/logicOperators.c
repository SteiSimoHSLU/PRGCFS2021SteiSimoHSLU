#include <stdio.h>

int main(int argc, char *argv[])
{
	//falls NICHT 3 Argumente, dann Block 7-10
	if( argc != 3)
	{
		//input not valid
		printf("Usage:\n");
		printf("logicOperators Intput 1 Intput 2\n");
	}
	else 
	{
		//input valid -> genau drei Argumente erhalten
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
	return 0;
}
