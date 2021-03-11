#include <stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int start = 1;
	int end = 100;
	
	for( int i = start; i <=end; i++)
	{
		sum=sum+ i;
	
	}

	printf("The sum from %d to %d is equal to %d\n", start, end, sum);

	return 0;
}

