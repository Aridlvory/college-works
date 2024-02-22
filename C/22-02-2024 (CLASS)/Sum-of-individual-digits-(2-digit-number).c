// Sum of individual digits of a 2 digit number
#include<stdio.h>
int main()
{
	int i, sum=0, n, r=0;
	printf("Enter the number of whose Individual digit summation u need (2 digit): ");
	scanf("%d", &n);
	for (i=1;i<=2;i++)
	{
		r = n % 10;
		sum += r;
		n /= 10;
	}
	printf("Sum of individual digit = %d", sum);
}
