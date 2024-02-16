#include<stdio.h>
int main()
{
	int ang1, ang2, ang3, sum;
	printf("Enter angles of triangle with space: ");
	scanf("%d%d%d",&ang1,&ang2,&ang3);
	sum = ang1 + ang2 + ang3;
	if (sum == 180)
	{
		printf("Valid Triangle");
	}
	else
	{
		printf("Invalid Triangle");
	}
}
