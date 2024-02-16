/*
Write a program to display fifth multiplicatioon table as output
*/

#include<stdio.h>

int main()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	printf("The Fifth multiplicatioon table of %d is",num);
	
	printf("\n%d * 1 = %d",num,num * 1);
	printf("\n%d * 2 = %d",num,num * 2);
	printf("\n%d * 3 = %d",num,num * 3);
	printf("\n%d * 4 = %d",num,num * 4);
	printf("\n%d * 5 = %d",num,num * 5);
	return 0;
}
