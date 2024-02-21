/*
Sum of first 20 even natural numbers
*/

#include<stdio.h>
int main()
{
	int i, sum = 0;
	printf("Sum of first 20 even natural numbers \n");
	for (i=2;i<21;i+=2)
	{
		sum += i;
		printf("%d + ",i);
	}
	printf("\b\b = %d", sum);
}
