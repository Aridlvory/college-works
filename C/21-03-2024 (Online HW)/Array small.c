// Write a C program to find smallest element (number) in the array.

#include<stdio.h>
int main()
{
	int arr[6] = {}, i, small = 0;
	printf("Enter 6 Numbers \n");
	for (i=0;i<6;i++)
	{
		printf("Enter Number %d: ", (i+1));
		scanf("%d", &arr[i]);
	}
	small = arr[0];
	for (i=0;i<6;i++)
	{
		if (arr[i] < small)
		{
			small = arr[i];
		}
	}
	printf("The smallest value is %d", small);
	return 0;
}
