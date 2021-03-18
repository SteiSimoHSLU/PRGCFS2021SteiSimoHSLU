#include <stdio.h>

int main(int argc, char *argv[])
{

//2. even numbers from 0-10
	int sum1 = 0;
	int start1 = 2;
	int end1 = 10;
	
	for( int i1 = start1; i1 <=end1;i1=i1+2)
	{
		
		sum1=sum1+ i1;
		printf("%d \n",i1);
	
	}
	printf("The sum from %d to %d is equal to %d\n\n", start1, end1, sum1);
	
//3. 40-25	
	int start2 = 40;
	int end2 = 25;
	
	for( int i2 = start2; i2 >=end2;i2=i2-1)
	{
		printf("%d \n",i2);
	
	}
	printf("\n");
	
	
	//4. hoch	
	int start3 = 1;
	int end3 = 800;
	
	for( int i3 = start3; i3 <=end3; )
	{
		printf("%d\n",i3);
		i3=i3*3;
	}
	

//5. Alle nummern von 0-100
	int start4 =1;
	int end4 =10;
	int out =0;
	
	for( int i4 = 0; i4 <=9; i4=i4+1 )
	{
		for (int i5 =1; i5<=10; )
		{
			out = 10*i4+i5;
			printf("%d ",out);
			i5=i5+1;
		}
		printf("\n");
		
	}
	
	printf("\n");
	
//6. break
	int start6 =1;
	int end6 =1000;
	int limit =555;
	int sum6 =0;
	int uprCounter = 0;
	int sum7 =0;
	
	
	for( int i6 = start6; i6 <=end6;  )
	{
		sum6=sum6+i6;
		
		
		if (sum6>=limit )
		{
			break;
		}
		sum7 =sum6;
		uprCounter = i6;
		i6=i6+1;
		
	}
	printf("with max. sum %d, the sum of the integeres from %d to %d is %d \n ",limit, start6, uprCounter, sum7  );
	return 0;
	
	
}

