//System includes
#include <stdio.h>

//Local includes
#include "bitOps.h"



//local variable
int localCounter = 0; //nur hier sichtbar


//privatefunction

//implementations
void setBitNInByte( unsigned char* data, unsigned char bitN){
*data |= 1 << bitN;
}

void clearBitNInByte( unsigned char* data, unsigned char bitN ){
*data &= ~(1 << bitN);
}

void toggleBitNInByte( unsigned char* data, unsigned char bitN ){
*data ^= 1 << bitN;
}

unsigned char BitNIsSet(unsigned char data, unsigned char bitN){
int checker = data;
int comparator = data;
comparator |= 1 << bitN;
if (comparator==checker){
	return 1;	
	}
else	return 0;	

}

