#include <stdio.h>
#include <unistd.h>

//State machine
typedef enum {
	HEATING = 1,
	SHOWMENU,
	MILLING,
	COFFEEMAKING,
	CLEANING,
	SHUTDOWN,
	ERROR
} CoffeeMakerStatus;

CoffeeMakerStatus status = HEATING;


//Function prototype
void ShowMenu(void);
int HeatingDone(void);

//main
int main(void) {

	// endless loop
	int run = 1;
	while(run == 1) //to repeat until run==0
	{
		
		switch(status) // actual Switch
		{
			case HEATING:
				if( HeatingDone() )
				{
					status = SHOWMENU;
				}
				break;
				
			case SHOWMENU:
				ShowMenu();
				break;		
		
			case MILLING:
				printf("milling.\n");
				status = COFFEEMAKING;
				break;
				
			case COFFEEMAKING:
				printf("SMELL THE ASHES! Ehh, Aroma!.\n");
				status = CLEANING;
				break;				

			case CLEANING:
				printf("Cleaning.... done.\n");
				status = SHOWMENU;
				break;	
											
			case SHUTDOWN:
				printf("Shutting down.\n");
				run = 0;
				break;


			default:
				printf("Coffee Maker in Error State.\n");
				status = SHUTDOWN;
				break;
		}
	}

	return 0;
}

void ShowMenu(void){
	int menuSelected = 0;
	printf("select from the following options:\n");
	printf("1: Reheat\n");
	printf("2: Make coffee\n");
	printf("9: Shutdown\n");
	scanf("%d",&menuSelected);
	switch(menuSelected)
	{
		case 1:
			status = HEATING;
			break;
	
		case 2:
			status = MILLING;
			break;
		case 9:
			status = SHUTDOWN;
			break;
		default:
			printf("invalid selection\n");
			status = SHOWMENU;
			break;
		
	}
	/*
	if (menuSelected == 1){
		status = HEATING;
	}
	else if (menuSelected == 9){
		status = SHUTDOWN;
	}
	else if (menuSelected == 2){
		status = MILLING;
	}
	else {
		printf("invalid selection\n");
		status = SHOWMENU;
	}
	*/
}

static int heatingCounter = 0;
int heatingLimit = 6;

//returns 1 if heating done, otherwise 0
int HeatingDone(void){
	int done = 0;
	usleep(100000);  //sleep in sec, usleep() in microseconds
	printf("#");
	fflush(stdout); //to force writing # right now
	heatingCounter++;
	if(heatingCounter >= heatingLimit)
	{
		//reset counter
		heatingCounter = 0;
		done = 1;
		printf(" Heating Completed.\n");
	}
	return done;
}
	




