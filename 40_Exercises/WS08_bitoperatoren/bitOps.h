#ifndef _BITOPS_H_
#define _BITOPS_H_

// Im header alles definieren was ausserhalb des .c files sichtbar sein muss



// globale Variable durch extern
//exponiert die Variable aus .c global-> in main abrufbar, sagt nur dass es irgendwo die Variable gibt

//declaration -> functions from bitOps.c
void setBitNInByte( unsigned char* data, unsigned char bitN);
void clearBitNInByte( unsigned char* data, unsigned char bitN );
void toggleBitNInByte( unsigned char* data, unsigned char bitN );
unsigned char BitNIsSet(unsigned char data, unsigned char bitN );
#endif
