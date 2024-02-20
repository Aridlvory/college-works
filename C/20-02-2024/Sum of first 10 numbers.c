/*
Write a C program to calculate the sum of the first 10 natural numbers using for loop. 
*/

#include<stdio.h>
int main()
{
	int i, sum = 0;
	printf("Sum of first 10 natural numbers\n");
	for (i=1;i<11;i++)
	{
		sum = sum + i;
		printf("%d + ", i);
	}
	printf("\b\b= %d",sum);
}
