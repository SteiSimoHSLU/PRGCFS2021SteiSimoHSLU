//System includes
#include <stdio.h>

//Local includes
#include "greetings.h"




// globale Variable durch initialisierung im header
int greetingsCounter = 0;

//local variable
int localCounter = 0; //nur hier sichtbar


//privatefunction
void IncrementGreetingsCounter( void){

	greetingsCounter++;
	}

//implementations
void SayHello(void){
	printf("Hello!\n");
	IncrementGreetingsCounter();
	}

void SayGoodbye(void){
	printf("Goodbye!\n");
	IncrementGreetingsCounter();
	}


