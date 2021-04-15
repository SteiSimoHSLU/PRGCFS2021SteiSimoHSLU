#include <stdio.h>


/* faktorial ohne rekursion
int factorial (int a)
	{
	
	int sum=1;
	for (int i=1; i<=a; i++)
		{
		sum=sum*i;		
		}
	return sum;
	}
*/

unsigned int factorial(unsigned int a) {
	if (a <= 1) 
	{
		return 1; // Die Fakultät von 0 und 1 ist als 1 definiert.
	} 
	else 
	{
	return a * factorial(a - 1);
	}
}
        
		
//n tief klein
int nchoosek(int n, int k)
	{
	int dividend=factorial(n);
	int divisor1=factorial(k);
	int divisor2=factorial(n-k);
	int divisor=factorial(k)*factorial((n-k));
	int quotient= dividend/divisor;
	return quotient;
	}


int main(int argc, char *argv[])
{

	int n1=20;
	int k1=2;
	if (n1<0)
		{
		printf("n must be equal or bigger then 0");		
		}
	else if (k1<0)
		{
		printf("k must be equal or bigger then 0");
		}
	else
	{
		int result=nchoosek(n1, k1);
		int dividend1=factorial(n1);
		int divisor1=factorial(k1)*factorial(n1-k1);	
		printf("n choose k is %d / %d = %d\n",dividend1, divisor1, result);
		int intType;
		printf("Size of int: %zu bytes\n", sizeof(intType));
	}

	

	return 0;
}

