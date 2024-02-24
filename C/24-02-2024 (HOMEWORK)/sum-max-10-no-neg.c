// Write a program to calculate the sum of 10 numbers entered by the user. (Max 10)
//  If the user enters a negative number, the loop terminates immediately and displays the sum of all positive numbers entered before the negative number without adding the negative number to the sum.
#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Program too calculate the sum of 10 numbers (Except Negatives)\n");
	for (i=1;i<=10;i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &n);
		if (n<0)
		{
			printf("Negative number inputted... Aborting. \n");
			break;
		}
		else
		{
			sum += n;
		}
	}
	printf("Sum of entered numbers = %d", sum);
}


