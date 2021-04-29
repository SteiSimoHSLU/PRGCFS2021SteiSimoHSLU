#include <stdio.h>
#include "bitOps.h"


unsigned char number=0xD3;

int main ( void ) {
	//setbit
	setBitNInByte(&number, 2);
	setBitNInByte(&number, 3);
	setBitNInByte(&number, 5);
	printf("setting bits 2,3 and 5 is %d\n",number);
	
	number=0xD3;
	clearBitNInByte(&number, 4);
	clearBitNInByte(&number, 6);
	clearBitNInByte(&number, 7);
	printf("clearing bits 4, 6 and 7 is %d\n",number);
	
	number=0xD3;
	toggleBitNInByte(&number, 1);
	toggleBitNInByte(&number, 4);
	toggleBitNInByte(&number, 6);
	printf("Toggling bits 1, 4 and 6 is %d\n",number);
	
	number=0xD3;
	
	for (int i=0; i<=7; i++)
	{
	printf("%d bit is %d\n",i, BitNIsSet(number, i));
	
	}
	

	return 0;
}
