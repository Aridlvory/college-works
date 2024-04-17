#include<stdio.h>

int leapyr(int year);
int main()
{
	int year; 
	printf("Enter the year: "); 
	scanf("%d", &year); 
	leapyr(year);
	return 0;
}

int leapyr(int year)
{
	if ((year % 100) == 0)
	{
		if ((year % 400) == 0)
		{ 
			printf("%d is a leap year", year);
		}
		else
		{ 
			printf("%d is not a leap year", year);
		}
	}
	else if ((year % 4) == 0)
	{ 
		printf("%d is a leap year", year);
	}
	else
	{ 
		printf("%d is not a leap year", year);
	}
}
