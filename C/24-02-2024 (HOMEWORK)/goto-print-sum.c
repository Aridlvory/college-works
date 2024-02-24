// Write a C Program to Print Sum of Odd/Even Numbers from 1 to n using ‘goto’ statement .
#include<stdio.h>
int main()
{
	int n, i, sum = 0;
	printf("Enter the number upto which u want to calculate the 'SUM': ");
	scanf("%d", &n);
	if (n%2 == 0) goto even;
	else goto odd;
	odd:
		for (i=1;i<=n;i++)
		{
			if (i%2 != 0) sum += i;
		}
		printf("%d", sum);
		goto abcd;
	even:
		for (i=1;i<=n;i++)
		{
			if (i%2 == 0) sum += i;
		}
		printf("%d", sum);
	abcd:
	return 0;
}

