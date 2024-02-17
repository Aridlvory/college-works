/*
 * Write a program to find whether a number is even or odd
 * using conditional operator.
 */
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	if ((num%2) == 0)
	{
		printf("%d is even number",num);
	}
	else
	{
		printf("%d is odd number",num);
	}
}
