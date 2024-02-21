/*
Sum of 20 even natural numbers -- do while
*/

#include<stdio.h>
int main()
{
	int i=2, sum = 0;
	printf("Sum of first 20 even natural numbers \n");
	do
	{
		sum += i;
		printf("%d + ",i);
		i+=2;
	}while(i<21);
	printf("\b\b = %d", sum);
}
