/*
Write a program too take input time in sec and display time in hours:minutes:seconds format
*/

#include<stdio.h>

int main()
{
	int isec, rsec, sec, hrs, min;
	
	printf("Enter the seconds value: "); 
	scanf("%d",&isec);
	hrs = isec/(60*60);
	
	rsec = isec - (hrs* (60 * 60));
	min = rsec/60;
	
	rsec = rsec - (min * 60);
	sec = rsec;
	
	printf("\n%dhr:%dmin:%dsec", hrs,min, sec);
	return 0;
}
