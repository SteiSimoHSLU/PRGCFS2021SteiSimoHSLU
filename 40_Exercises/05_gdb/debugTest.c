#include <stdio.h>

int add(int a, int b)
{
	return a+b;
} 

int multiply(int a, int b)
{
	return a*b;
}

float divide(float num, float den)
{
	return num/(den);
}


int main()
{
	int sum = 0, product = 1;
	float ratio = 0; 
	
	for(int i = 1; i <= 10; i++) 
	{
		sum = add(sum, i);
		product = multiply(product, i);  
	}
	ratio = divide(sum, product);
	return 0;
}


