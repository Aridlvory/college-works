#include<stdio.h>
int main()
{
	float basicsal, dearnessall, houserent, grosssal;
	printf("Input Basic Salary: ");
	scanf("%f",&basicsal);
	dearnessall = basicsal * (40.0 / 100.0);
	houserent = basicsal * (20.0 / 100.0);
	grosssal = basicsal + dearnessall + houserent;
	printf("The Gross Salary is: %f",grosssal);
	return 0;
}
