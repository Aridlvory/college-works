/*
 * Use if statement to identify and print Biggest of 3 numbers
*/

#include<stdio.h>
int main() 
{
	int a=0, b=0, c=0;
	printf("Input 3 Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if ((a>b) & (a>c)) 
	{
		printf("%d is the largest number",a);
	}
	if ((b>a) & (b>c)) 
	{
		printf("%d is the largest number",b);
	}
	if ((c>b) & (c>a))
	{
		printf("%d is the largest number",c);
	}
	return 0;
}
