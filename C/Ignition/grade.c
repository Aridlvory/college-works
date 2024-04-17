#include<stdio.h>
int main()
{
	int n;
	printf("Enter the mark: ");
	scanf("%d",&n);
	if (n>=90 && n<101)
	{
		printf("You have S Grade");
	}
	else if (n>=80 && n<90)
	{
		printf("You have A Grade");
	}
	else if (n>=70 && n<80)
	{
		printf("You have B Grade");
	}
	else if (n>=60 && n<70)
	{
		printf("You have C Grade");
	}
	else if (n>=50 && n<60)
	{
		printf("You have D Grade");
	}
	else if (n>=40 && n<50)
	{
		printf("You have E Grade");
	}
	else
	{
		printf("You Fail");
	}
}
