#include<stdio.h>

int factorial(int x);
int main()
{
	int a;
	printf("Input the number to find Factorial: ");
	scanf("%d",&a);
	printf("The factorial of the given number is: %d", factorial(a)); 
	return 0;
}

int factorial(int x)
{
	int i, fact = 1;
	for (i=1; i<=x; i++)
	{
		fact = fact * i;
	}
	return fact;
}

