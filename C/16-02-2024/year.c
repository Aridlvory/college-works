/*
Write a program to find whether the year entered by the user is leap year or not? [Hint: A leap year is exactly divisible by 4 except for century years
 (years ending with 00). The century year is a leap year only if it is perfectly divisible by 400. Use && and != operators where ever required with if ….. else if…… else…….statement] 
 1924 and 2000 are leap year. but 1900 is not a leap year
*/

#include<stdio.h>

int main()
{
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
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
