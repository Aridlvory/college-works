/*
Sum of first 10 numbers in while loop
*/

#include<stdio.h>
int main()
{
	int i=1, sum=0;
	while(i<11)
	{
		sum += i;
		printf("%d + ", i);
		i++;
	}
	printf("\b\b = %d", sum);
}
